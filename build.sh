#!/bin/bash	

# top most line is pointing what interpreter to be used

mkdir build/	# making a build directory in project folder hence this script to be run in project directory
cd build	# get into build directory
cmake ..	# run cmake to do what?
make		# if cmake executed successfully, then run make to generate an executable
cd ..		# come back to project directory
./build/executable "$@"	# run the executable from project directory

# make sure to make this build.sh script executable by "chmode +x build.sh"
