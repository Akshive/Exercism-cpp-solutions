# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/akshive/exercism/cpp/etl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/akshive/exercism/cpp/etl/build

# Utility rule file for test_etl.

# Include the progress variables for this target.
include CMakeFiles/test_etl.dir/progress.make

CMakeFiles/test_etl: etl
	./etl

test_etl: CMakeFiles/test_etl
test_etl: CMakeFiles/test_etl.dir/build.make

.PHONY : test_etl

# Rule to build all files generated by this target.
CMakeFiles/test_etl.dir/build: test_etl

.PHONY : CMakeFiles/test_etl.dir/build

CMakeFiles/test_etl.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_etl.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_etl.dir/clean

CMakeFiles/test_etl.dir/depend:
	cd /home/akshive/exercism/cpp/etl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/akshive/exercism/cpp/etl /home/akshive/exercism/cpp/etl /home/akshive/exercism/cpp/etl/build /home/akshive/exercism/cpp/etl/build /home/akshive/exercism/cpp/etl/build/CMakeFiles/test_etl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_etl.dir/depend

