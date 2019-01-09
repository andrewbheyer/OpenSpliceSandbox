1) Start by going to the bin directory, read the README.md
   and modify the setup.env for the OpenSplice you wish to 
   use

2) Source the `*-setup.env` you just changed and wish to use

3) Compile your program with `cmake .` then `make`

4) Run your publisher and subscriber in separate terminals.
   `./tssub`, `./tspub`

More on requirements here https://github.com/kydos/dds-tutorial-cpp
The ch1, ch2, and ch3 programs were copied from this link.
