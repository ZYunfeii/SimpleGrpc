# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yunfei/Packages/cmake-3.19.6-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/yunfei/Packages/cmake-3.19.6-Linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yunfei/MyProject/SimpleGrpc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yunfei/MyProject/SimpleGrpc/build

# Include any dependencies generated for this target.
include CMakeFiles/grpc_proto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/grpc_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/grpc_proto.dir/flags.make

CMakeFiles/grpc_proto.dir/demo.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/demo.pb.cc.o: ../demo.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yunfei/MyProject/SimpleGrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/grpc_proto.dir/demo.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grpc_proto.dir/demo.pb.cc.o -c /home/yunfei/MyProject/SimpleGrpc/demo.pb.cc

CMakeFiles/grpc_proto.dir/demo.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/demo.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yunfei/MyProject/SimpleGrpc/demo.pb.cc > CMakeFiles/grpc_proto.dir/demo.pb.cc.i

CMakeFiles/grpc_proto.dir/demo.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/demo.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yunfei/MyProject/SimpleGrpc/demo.pb.cc -o CMakeFiles/grpc_proto.dir/demo.pb.cc.s

CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o: CMakeFiles/grpc_proto.dir/flags.make
CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o: ../demo.grpc.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yunfei/MyProject/SimpleGrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o -c /home/yunfei/MyProject/SimpleGrpc/demo.grpc.pb.cc

CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yunfei/MyProject/SimpleGrpc/demo.grpc.pb.cc > CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.i

CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yunfei/MyProject/SimpleGrpc/demo.grpc.pb.cc -o CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.s

# Object files for target grpc_proto
grpc_proto_OBJECTS = \
"CMakeFiles/grpc_proto.dir/demo.pb.cc.o" \
"CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o"

# External object files for target grpc_proto
grpc_proto_EXTERNAL_OBJECTS =

libgrpc_proto.a: CMakeFiles/grpc_proto.dir/demo.pb.cc.o
libgrpc_proto.a: CMakeFiles/grpc_proto.dir/demo.grpc.pb.cc.o
libgrpc_proto.a: CMakeFiles/grpc_proto.dir/build.make
libgrpc_proto.a: CMakeFiles/grpc_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yunfei/MyProject/SimpleGrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libgrpc_proto.a"
	$(CMAKE_COMMAND) -P CMakeFiles/grpc_proto.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grpc_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/grpc_proto.dir/build: libgrpc_proto.a

.PHONY : CMakeFiles/grpc_proto.dir/build

CMakeFiles/grpc_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/grpc_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/grpc_proto.dir/clean

CMakeFiles/grpc_proto.dir/depend:
	cd /home/yunfei/MyProject/SimpleGrpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yunfei/MyProject/SimpleGrpc /home/yunfei/MyProject/SimpleGrpc /home/yunfei/MyProject/SimpleGrpc/build /home/yunfei/MyProject/SimpleGrpc/build /home/yunfei/MyProject/SimpleGrpc/build/CMakeFiles/grpc_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/grpc_proto.dir/depend
