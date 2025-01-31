//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: dds_builtinTopics.h
//  Source: /home/dmills/apps/OpenSpliceDDS_6.7/etc/idl/dds_builtinTopics.idl
//  Generated: Mon Jul 31 11:30:23 2017
//  OpenSplice 6.7.170523OSS
//  
//******************************************************************
#ifndef _DDS_BUILTINTOPICS_H_
#define _DDS_BUILTINTOPICS_H_

#include "sacpp_mapping.h"


namespace DDS
{
   struct Duration_t;
   struct UserDataQosPolicy;
   struct TopicDataQosPolicy;
   struct GroupDataQosPolicy;
   struct TransportPriorityQosPolicy;
   struct LifespanQosPolicy;
   struct DurabilityQosPolicy;
   struct PresentationQosPolicy;
   struct DeadlineQosPolicy;
   struct LatencyBudgetQosPolicy;
   struct OwnershipQosPolicy;
   struct OwnershipStrengthQosPolicy;
   struct LivelinessQosPolicy;
   struct TimeBasedFilterQosPolicy;
   struct PartitionQosPolicy;
   struct ReliabilityQosPolicy;
   struct DestinationOrderQosPolicy;
   struct HistoryQosPolicy;
   struct ResourceLimitsQosPolicy;
   struct DurabilityServiceQosPolicy;
   struct ProductDataQosPolicy;
   struct EntityFactoryQosPolicy;
   struct ShareQosPolicy;
   struct WriterDataLifecycleQosPolicy;
   struct InvalidSampleVisibilityQosPolicy;
   struct SubscriptionKeyQosPolicy;
   struct ReaderDataLifecycleQosPolicy;
   struct UserKeyQosPolicy;
   struct ReaderLifespanQosPolicy;
   struct TypeHash;
   struct ParticipantBuiltinTopicData;
   struct TopicBuiltinTopicData;
   struct TypeBuiltinTopicData;
   struct PublicationBuiltinTopicData;
   struct SubscriptionBuiltinTopicData;
   struct CMParticipantBuiltinTopicData;
   struct CMPublisherBuiltinTopicData;
   struct CMSubscriberBuiltinTopicData;
   struct CMDataWriterBuiltinTopicData;
   struct CMDataReaderBuiltinTopicData;
   struct octSeq_uniq_ {};
   typedef DDS_DCPSUFLSeq < Octet, struct octSeq_uniq_> octSeq;
   typedef DDS_DCPSSequence_var < octSeq> octSeq_var;
   typedef DDS_DCPSSequence_out < octSeq> octSeq_out;
   typedef DDS::Long BuiltinTopicKey_t_slice;
   typedef DDS::Long BuiltinTopicKey_t[3];
   typedef BuiltinTopicKey_t BuiltinTopicKey_t_out;
   extern BuiltinTopicKey_t_slice * BuiltinTopicKey_t_alloc ();
   extern void BuiltinTopicKey_t_free (BuiltinTopicKey_t_slice *);
   extern void BuiltinTopicKey_t_copy (BuiltinTopicKey_t_slice* to, const BuiltinTopicKey_t_slice* from);
   extern BuiltinTopicKey_t_slice *BuiltinTopicKey_t_dup (const BuiltinTopicKey_t_slice* from);

   struct BuiltinTopicKey_t_uniq_ {};
   typedef DDS_DCPS_FArray_var< BuiltinTopicKey_t, BuiltinTopicKey_t_slice, struct BuiltinTopicKey_t_uniq_> BuiltinTopicKey_t_var;
   typedef DDS_DCPS_Array_forany< BuiltinTopicKey_t, BuiltinTopicKey_t_slice, struct BuiltinTopicKey_t_uniq_> BuiltinTopicKey_t_forany;
   struct StringSeq_uniq_ {};
   typedef DDS_DCPSUStrSeqT <struct StringSeq_uniq_> StringSeq;
   typedef DDS_DCPSUStrSeq_var < StringSeq> StringSeq_var;
   typedef DDS_DCPSUStrSeq_out < StringSeq> StringSeq_out;
   typedef DDS::Short DataRepresentationId_t;
   const DDS::Short XCDR_REPRESENTATION = (DDS::Short) 0;
   const DDS::Short XML_REPRESENTATION = (DDS::Short) 1;
   const DDS::Short OSPL_REPRESENTATION = (DDS::Short) 1024;
   const DDS::Short GPB_REPRESENTATION = (DDS::Short) 1025;
   const DDS::Short INVALID_REPRESENTATION = (DDS::Short) 32767;

   struct Duration_t
   {
         Long sec;
         ULong nanosec;
   };

   typedef DDS_DCPSStruct_var < Duration_t> Duration_t_var;
   typedef Duration_t&Duration_t_out;

   struct UserDataQosPolicy
   {
         octSeq value;
   };

   typedef DDS_DCPSStruct_var < UserDataQosPolicy> UserDataQosPolicy_var;
   typedef DDS_DCPSStruct_out < UserDataQosPolicy> UserDataQosPolicy_out;

   struct TopicDataQosPolicy
   {
         octSeq value;
   };

   typedef DDS_DCPSStruct_var < TopicDataQosPolicy> TopicDataQosPolicy_var;
   typedef DDS_DCPSStruct_out < TopicDataQosPolicy> TopicDataQosPolicy_out;

   struct GroupDataQosPolicy
   {
         octSeq value;
   };

   typedef DDS_DCPSStruct_var < GroupDataQosPolicy> GroupDataQosPolicy_var;
   typedef DDS_DCPSStruct_out < GroupDataQosPolicy> GroupDataQosPolicy_out;

   struct TransportPriorityQosPolicy
   {
         Long value;
   };

   typedef DDS_DCPSStruct_var < TransportPriorityQosPolicy> TransportPriorityQosPolicy_var;
   typedef TransportPriorityQosPolicy&TransportPriorityQosPolicy_out;

   struct LifespanQosPolicy
   {
         Duration_t duration;
   };

   typedef DDS_DCPSStruct_var < LifespanQosPolicy> LifespanQosPolicy_var;
   typedef LifespanQosPolicy&LifespanQosPolicy_out;
   enum DurabilityQosPolicyKind
   {
      VOLATILE_DURABILITY_QOS,
      TRANSIENT_LOCAL_DURABILITY_QOS,
      TRANSIENT_DURABILITY_QOS,
      PERSISTENT_DURABILITY_QOS
   };

   struct DurabilityQosPolicy
   {
         DurabilityQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < DurabilityQosPolicy> DurabilityQosPolicy_var;
   typedef DurabilityQosPolicy&DurabilityQosPolicy_out;
   enum PresentationQosPolicyAccessScopeKind
   {
      INSTANCE_PRESENTATION_QOS,
      TOPIC_PRESENTATION_QOS,
      GROUP_PRESENTATION_QOS
   };

   struct PresentationQosPolicy
   {
         PresentationQosPolicyAccessScopeKind access_scope;
         Boolean coherent_access;
         Boolean ordered_access;
   };

   typedef DDS_DCPSStruct_var < PresentationQosPolicy> PresentationQosPolicy_var;
   typedef PresentationQosPolicy&PresentationQosPolicy_out;

   struct DeadlineQosPolicy
   {
         Duration_t period;
   };

   typedef DDS_DCPSStruct_var < DeadlineQosPolicy> DeadlineQosPolicy_var;
   typedef DeadlineQosPolicy&DeadlineQosPolicy_out;

   struct LatencyBudgetQosPolicy
   {
         Duration_t duration;
   };

   typedef DDS_DCPSStruct_var < LatencyBudgetQosPolicy> LatencyBudgetQosPolicy_var;
   typedef LatencyBudgetQosPolicy&LatencyBudgetQosPolicy_out;
   enum OwnershipQosPolicyKind
   {
      SHARED_OWNERSHIP_QOS,
      EXCLUSIVE_OWNERSHIP_QOS
   };

   struct OwnershipQosPolicy
   {
         OwnershipQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < OwnershipQosPolicy> OwnershipQosPolicy_var;
   typedef OwnershipQosPolicy&OwnershipQosPolicy_out;

   struct OwnershipStrengthQosPolicy
   {
         Long value;
   };

   typedef DDS_DCPSStruct_var < OwnershipStrengthQosPolicy> OwnershipStrengthQosPolicy_var;
   typedef OwnershipStrengthQosPolicy&OwnershipStrengthQosPolicy_out;
   enum LivelinessQosPolicyKind
   {
      AUTOMATIC_LIVELINESS_QOS,
      MANUAL_BY_PARTICIPANT_LIVELINESS_QOS,
      MANUAL_BY_TOPIC_LIVELINESS_QOS
   };

   struct LivelinessQosPolicy
   {
         LivelinessQosPolicyKind kind;
         Duration_t lease_duration;
   };

   typedef DDS_DCPSStruct_var < LivelinessQosPolicy> LivelinessQosPolicy_var;
   typedef LivelinessQosPolicy&LivelinessQosPolicy_out;

   struct TimeBasedFilterQosPolicy
   {
         Duration_t minimum_separation;
   };

   typedef DDS_DCPSStruct_var < TimeBasedFilterQosPolicy> TimeBasedFilterQosPolicy_var;
   typedef TimeBasedFilterQosPolicy&TimeBasedFilterQosPolicy_out;

   struct PartitionQosPolicy
   {
         StringSeq name;
   };

   typedef DDS_DCPSStruct_var < PartitionQosPolicy> PartitionQosPolicy_var;
   typedef DDS_DCPSStruct_out < PartitionQosPolicy> PartitionQosPolicy_out;
   enum ReliabilityQosPolicyKind
   {
      BEST_EFFORT_RELIABILITY_QOS,
      RELIABLE_RELIABILITY_QOS
   };

   struct ReliabilityQosPolicy
   {
         ReliabilityQosPolicyKind kind;
         Duration_t max_blocking_time;
         Boolean synchronous;
   };

   typedef DDS_DCPSStruct_var < ReliabilityQosPolicy> ReliabilityQosPolicy_var;
   typedef ReliabilityQosPolicy&ReliabilityQosPolicy_out;
   enum DestinationOrderQosPolicyKind
   {
      BY_RECEPTION_TIMESTAMP_DESTINATIONORDER_QOS,
      BY_SOURCE_TIMESTAMP_DESTINATIONORDER_QOS
   };

   struct DestinationOrderQosPolicy
   {
         DestinationOrderQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < DestinationOrderQosPolicy> DestinationOrderQosPolicy_var;
   typedef DestinationOrderQosPolicy&DestinationOrderQosPolicy_out;
   enum HistoryQosPolicyKind
   {
      KEEP_LAST_HISTORY_QOS,
      KEEP_ALL_HISTORY_QOS
   };

   struct HistoryQosPolicy
   {
         HistoryQosPolicyKind kind;
         Long depth;
   };

   typedef DDS_DCPSStruct_var < HistoryQosPolicy> HistoryQosPolicy_var;
   typedef HistoryQosPolicy&HistoryQosPolicy_out;

   struct ResourceLimitsQosPolicy
   {
         Long max_samples;
         Long max_instances;
         Long max_samples_per_instance;
   };

   typedef DDS_DCPSStruct_var < ResourceLimitsQosPolicy> ResourceLimitsQosPolicy_var;
   typedef ResourceLimitsQosPolicy&ResourceLimitsQosPolicy_out;

   struct DurabilityServiceQosPolicy
   {
         Duration_t service_cleanup_delay;
         HistoryQosPolicyKind history_kind;
         Long history_depth;
         Long max_samples;
         Long max_instances;
         Long max_samples_per_instance;
   };

   typedef DDS_DCPSStruct_var < DurabilityServiceQosPolicy> DurabilityServiceQosPolicy_var;
   typedef DurabilityServiceQosPolicy&DurabilityServiceQosPolicy_out;

   struct ProductDataQosPolicy
   {
         String_mgr value;
   };

   typedef DDS_DCPSStruct_var < ProductDataQosPolicy> ProductDataQosPolicy_var;
   typedef DDS_DCPSStruct_out < ProductDataQosPolicy> ProductDataQosPolicy_out;

   struct EntityFactoryQosPolicy
   {
         Boolean autoenable_created_entities;
   };

   typedef DDS_DCPSStruct_var < EntityFactoryQosPolicy> EntityFactoryQosPolicy_var;
   typedef EntityFactoryQosPolicy&EntityFactoryQosPolicy_out;

   struct ShareQosPolicy
   {
         String_mgr name;
         Boolean enable;
   };

   typedef DDS_DCPSStruct_var < ShareQosPolicy> ShareQosPolicy_var;
   typedef DDS_DCPSStruct_out < ShareQosPolicy> ShareQosPolicy_out;

   struct WriterDataLifecycleQosPolicy
   {
         Boolean autodispose_unregistered_instances;
         Duration_t autopurge_suspended_samples_delay;
         Duration_t autounregister_instance_delay;
   };

   typedef DDS_DCPSStruct_var < WriterDataLifecycleQosPolicy> WriterDataLifecycleQosPolicy_var;
   typedef WriterDataLifecycleQosPolicy&WriterDataLifecycleQosPolicy_out;
   enum InvalidSampleVisibilityQosPolicyKind
   {
      NO_INVALID_SAMPLES,
      MINIMUM_INVALID_SAMPLES,
      ALL_INVALID_SAMPLES
   };

   struct InvalidSampleVisibilityQosPolicy
   {
         InvalidSampleVisibilityQosPolicyKind kind;
   };

   typedef DDS_DCPSStruct_var < InvalidSampleVisibilityQosPolicy> InvalidSampleVisibilityQosPolicy_var;
   typedef InvalidSampleVisibilityQosPolicy&InvalidSampleVisibilityQosPolicy_out;

   struct SubscriptionKeyQosPolicy
   {
         Boolean use_key_list;
         StringSeq key_list;
   };

   typedef DDS_DCPSStruct_var < SubscriptionKeyQosPolicy> SubscriptionKeyQosPolicy_var;
   typedef DDS_DCPSStruct_out < SubscriptionKeyQosPolicy> SubscriptionKeyQosPolicy_out;

   struct ReaderDataLifecycleQosPolicy
   {
         Duration_t autopurge_nowriter_samples_delay;
         Duration_t autopurge_disposed_samples_delay;
         Boolean autopurge_dispose_all;
         Boolean enable_invalid_samples;
         InvalidSampleVisibilityQosPolicy invalid_sample_visibility;
   };

   typedef DDS_DCPSStruct_var < ReaderDataLifecycleQosPolicy> ReaderDataLifecycleQosPolicy_var;
   typedef ReaderDataLifecycleQosPolicy&ReaderDataLifecycleQosPolicy_out;

   struct UserKeyQosPolicy
   {
         Boolean enable;
         String_mgr expression;
   };

   typedef DDS_DCPSStruct_var < UserKeyQosPolicy> UserKeyQosPolicy_var;
   typedef DDS_DCPSStruct_out < UserKeyQosPolicy> UserKeyQosPolicy_out;

   struct ReaderLifespanQosPolicy
   {
         Boolean use_lifespan;
         Duration_t duration;
   };

   typedef DDS_DCPSStruct_var < ReaderLifespanQosPolicy> ReaderLifespanQosPolicy_var;
   typedef ReaderLifespanQosPolicy&ReaderLifespanQosPolicy_out;

   struct TypeHash
   {
         ULongLong msb;
         ULongLong lsb;
   };

   typedef DDS_DCPSStruct_var < TypeHash> TypeHash_var;
   typedef TypeHash&TypeHash_out;

   struct ParticipantBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         UserDataQosPolicy user_data;
   };

   typedef DDS_DCPSStruct_var < ParticipantBuiltinTopicData> ParticipantBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < ParticipantBuiltinTopicData> ParticipantBuiltinTopicData_out;

   struct TopicBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         String_mgr name;
         String_mgr type_name;
         DurabilityQosPolicy durability;
         DurabilityServiceQosPolicy durability_service;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         TransportPriorityQosPolicy transport_priority;
         LifespanQosPolicy lifespan;
         DestinationOrderQosPolicy destination_order;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         OwnershipQosPolicy ownership;
         TopicDataQosPolicy topic_data;
   };

   typedef DDS_DCPSStruct_var < TopicBuiltinTopicData> TopicBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < TopicBuiltinTopicData> TopicBuiltinTopicData_out;

   struct TypeBuiltinTopicData
   {
         String_mgr name;
         Short data_representation_id;
         TypeHash type_hash;
         octSeq meta_data;
         octSeq extentions;
   };

   typedef DDS_DCPSStruct_var < TypeBuiltinTopicData> TypeBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < TypeBuiltinTopicData> TypeBuiltinTopicData_out;

   struct PublicationBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         BuiltinTopicKey_t participant_key;
         String_mgr topic_name;
         String_mgr type_name;
         DurabilityQosPolicy durability;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         LifespanQosPolicy lifespan;
         DestinationOrderQosPolicy destination_order;
         UserDataQosPolicy user_data;
         OwnershipQosPolicy ownership;
         OwnershipStrengthQosPolicy ownership_strength;
         PresentationQosPolicy presentation;
         PartitionQosPolicy partition;
         TopicDataQosPolicy topic_data;
         GroupDataQosPolicy group_data;
   };

   typedef DDS_DCPSStruct_var < PublicationBuiltinTopicData> PublicationBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < PublicationBuiltinTopicData> PublicationBuiltinTopicData_out;

   struct SubscriptionBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         BuiltinTopicKey_t participant_key;
         String_mgr topic_name;
         String_mgr type_name;
         DurabilityQosPolicy durability;
         DeadlineQosPolicy deadline;
         LatencyBudgetQosPolicy latency_budget;
         LivelinessQosPolicy liveliness;
         ReliabilityQosPolicy reliability;
         OwnershipQosPolicy ownership;
         DestinationOrderQosPolicy destination_order;
         UserDataQosPolicy user_data;
         TimeBasedFilterQosPolicy time_based_filter;
         PresentationQosPolicy presentation;
         PartitionQosPolicy partition;
         TopicDataQosPolicy topic_data;
         GroupDataQosPolicy group_data;
   };

   typedef DDS_DCPSStruct_var < SubscriptionBuiltinTopicData> SubscriptionBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < SubscriptionBuiltinTopicData> SubscriptionBuiltinTopicData_out;

   struct CMParticipantBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         ProductDataQosPolicy product;
   };

   typedef DDS_DCPSStruct_var < CMParticipantBuiltinTopicData> CMParticipantBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < CMParticipantBuiltinTopicData> CMParticipantBuiltinTopicData_out;

   struct CMPublisherBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         ProductDataQosPolicy product;
         BuiltinTopicKey_t participant_key;
         String_mgr name;
         EntityFactoryQosPolicy entity_factory;
         PartitionQosPolicy partition;
   };

   typedef DDS_DCPSStruct_var < CMPublisherBuiltinTopicData> CMPublisherBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < CMPublisherBuiltinTopicData> CMPublisherBuiltinTopicData_out;

   struct CMSubscriberBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         ProductDataQosPolicy product;
         BuiltinTopicKey_t participant_key;
         String_mgr name;
         EntityFactoryQosPolicy entity_factory;
         ShareQosPolicy share;
         PartitionQosPolicy partition;
   };

   typedef DDS_DCPSStruct_var < CMSubscriberBuiltinTopicData> CMSubscriberBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < CMSubscriberBuiltinTopicData> CMSubscriberBuiltinTopicData_out;

   struct CMDataWriterBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         ProductDataQosPolicy product;
         BuiltinTopicKey_t publisher_key;
         String_mgr name;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         WriterDataLifecycleQosPolicy writer_data_lifecycle;
   };

   typedef DDS_DCPSStruct_var < CMDataWriterBuiltinTopicData> CMDataWriterBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < CMDataWriterBuiltinTopicData> CMDataWriterBuiltinTopicData_out;

   struct CMDataReaderBuiltinTopicData
   {
         BuiltinTopicKey_t key;
         ProductDataQosPolicy product;
         BuiltinTopicKey_t subscriber_key;
         String_mgr name;
         HistoryQosPolicy history;
         ResourceLimitsQosPolicy resource_limits;
         ReaderDataLifecycleQosPolicy reader_data_lifecycle;
         UserKeyQosPolicy subscription_keys;
         ReaderLifespanQosPolicy reader_lifespan;
         ShareQosPolicy share;
   };

   typedef DDS_DCPSStruct_var < CMDataReaderBuiltinTopicData> CMDataReaderBuiltinTopicData_var;
   typedef DDS_DCPSStruct_out < CMDataReaderBuiltinTopicData> CMDataReaderBuiltinTopicData_out;
}
template <>
DDS::BuiltinTopicKey_t_slice* DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::alloc ();
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::copy (DDS::BuiltinTopicKey_t_slice *to, const DDS::BuiltinTopicKey_t_slice* from);
template <>
void DDS_DCPS_ArrayHelper < DDS::BuiltinTopicKey_t, DDS::BuiltinTopicKey_t_slice, DDS::BuiltinTopicKey_t_uniq_>::free (DDS::BuiltinTopicKey_t_slice *ptr);




#endif
