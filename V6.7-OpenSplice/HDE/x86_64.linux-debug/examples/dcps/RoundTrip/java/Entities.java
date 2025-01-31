/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to  PrismTech
 *   Limited, its affiliated companies and licensors. All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

/**
 * This class serves as a container holding initialised entities used by Ping and Pong
 */
class Entities
{

    public Entities(String pubPartition, String subPartition) throws Exception, NullPointerException
    {
        int status;

        /** A DDS::DomainParticipant is created for the default domain. */
        domainParticipantFactory = DDS.DomainParticipantFactory.get_instance();
        ExampleError.CheckHandle(domainParticipantFactory, "Entities, DDS.DomainParticipantFactory.get_instance");
        participant = domainParticipantFactory.create_participant(
            DDS.DOMAIN_ID_DEFAULT.value, DDS.PARTICIPANT_QOS_DEFAULT.value, null, DDS.STATUS_MASK_NONE.value);
        ExampleError.CheckHandle(participant, "Entities, domainParticipantFactory.create_participant");

        /** The sample type is created and registered */
        typeSupport = new RoundTripModule.DataTypeTypeSupport();
        status = typeSupport.register_type(participant, typeSupport.get_type_name());
        ExampleError.CheckStatus(status, "Entities, typeSupport.register_type");

        /** A DDS::Topic is created for our sample type on the domain participant. */
        topic = participant.create_topic("RoundTrip", typeSupport.get_type_name(),
                                            DDS.TOPIC_QOS_DEFAULT.value, null, DDS.STATUS_MASK_NONE.value);
        ExampleError.CheckHandle(topic, "Entities, participant.create_topic");

        /** A DDS::Publisher is created on the domain participant. */
        DDS.PublisherQosHolder pubQos = new DDS.PublisherQosHolder();
        status = participant.get_default_publisher_qos(pubQos);
        ExampleError.CheckStatus(status, "Entities, participant.get_default_publisher_qos");
        pubQos.value.partition.name = new String[1];
        pubQos.value.partition.name[0] = pubPartition;
        publisher = participant.create_publisher(pubQos.value, null, DDS.STATUS_MASK_NONE.value);
        ExampleError.CheckHandle(topic, "Entities, participant.create_publisher");

        /** A DDS::DataWriter is created on the Publisher & Topic with a modififed Qos. */
        DDS.DataWriterQosHolder dwQos = new DDS.DataWriterQosHolder();
        status = publisher.get_default_datawriter_qos(dwQos);
        ExampleError.CheckStatus(status, "Entities, publisher.get_default_datawriter_qos");
        dwQos.value.reliability.kind = DDS.ReliabilityQosPolicyKind.RELIABLE_RELIABILITY_QOS;
        dwQos.value.reliability.max_blocking_time.sec = 10;
        dwQos.value.writer_data_lifecycle.autodispose_unregistered_instances = false;
        DDS.DataWriter tmpWriter = publisher.create_datawriter(topic, dwQos.value, null, DDS.STATUS_MASK_NONE.value);
        writer = RoundTripModule.DataTypeDataWriterHelper.narrow(tmpWriter);
        ExampleError.CheckHandle(writer, "Entities, RoundTripModule.DataTypeDataWriterHelper.narrow");

        /** A DDS::Subscriber is created on the domain participant. */
        DDS.SubscriberQosHolder subQos = new DDS.SubscriberQosHolder();
        status = participant.get_default_subscriber_qos(subQos);
        ExampleError.CheckStatus(status, "Entities, participant.get_default_subscriber_qos");
        subQos.value.partition.name = new String[1];
        subQos.value.partition.name[0] = subPartition;
        subscriber = participant.create_subscriber(subQos.value, null, DDS.STATUS_MASK_NONE.value);
        ExampleError.CheckHandle(subscriber, "Entities, participant.create_subscriber");

        /** A DDS::DataReader is created on the Subscriber & Topic with the default Topic QoS. */
        DDS.DataReaderQosHolder drQos = new DDS.DataReaderQosHolder();
        status = subscriber.get_default_datareader_qos(drQos);
        ExampleError.CheckStatus(status, "Entities, subscriber.get_default_datareader_qos");
        drQos.value.reliability.kind = DDS.ReliabilityQosPolicyKind.RELIABLE_RELIABILITY_QOS;
        drQos.value.reliability.max_blocking_time.sec = 10;
        DDS.DataReader tmpReader = subscriber.create_datareader(topic, drQos.value, null, DDS.STATUS_MASK_NONE.value);
        reader = RoundTripModule.DataTypeDataReaderHelper.narrow(tmpReader);
        ExampleError.CheckHandle(reader, "Entities, RoundTripModule.DataTypeDataReaderHelper.narrow");

        /** A DDS::StatusCondition is created which is triggered when data is available to read */
        dataAvailable = reader.get_statuscondition();
        ExampleError.CheckHandle(dataAvailable, "Entities, reader.get_status_condition");
        status = dataAvailable.set_enabled_statuses(DDS.DATA_AVAILABLE_STATUS.value);
        ExampleError.CheckStatus(status, "Entities, dataAvailable.set_enabled_statuses");

        /** A DDS::WaitSet is created and the data available status condition is attached */
        waitSet = new DDS.WaitSet();
        status = waitSet.attach_condition(dataAvailable);
        ExampleError.CheckStatus(status, "Entities, waitSet.attach_condition");

        terminated = new DDS.GuardCondition();
        status = waitSet.attach_condition(terminated);
        ExampleError.CheckStatus(status, "Entities, waitSet.attach_condition");
    }

    public DDS.DomainParticipantFactory domainParticipantFactory;
    public DDS.DomainParticipant participant;
    public RoundTripModule.DataTypeTypeSupport typeSupport;
    public DDS.Topic topic;
    public DDS.Publisher publisher;
    public RoundTripModule.DataTypeDataWriter writer;
    public DDS.Subscriber subscriber;
    public RoundTripModule.DataTypeDataReader reader;
    public DDS.WaitSet waitSet;
    public DDS.StatusCondition dataAvailable;
    public DDS.GuardCondition terminated;
}
