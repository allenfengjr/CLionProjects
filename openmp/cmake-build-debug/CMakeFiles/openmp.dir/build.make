# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fenghao/CLionProjects/openmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fenghao/CLionProjects/openmp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/openmp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/openmp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/openmp.dir/flags.make

CMakeFiles/openmp.dir/main.cpp.o: CMakeFiles/openmp.dir/flags.make
CMakeFiles/openmp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fenghao/CLionProjects/openmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/openmp.dir/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/openmp.dir/main.cpp.o -c /Users/fenghao/CLionProjects/openmp/main.cpp

CMakeFiles/openmp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openmp.dir/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fenghao/CLionProjects/openmp/main.cpp > CMakeFiles/openmp.dir/main.cpp.i

CMakeFiles/openmp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openmp.dir/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fenghao/CLionProjects/openmp/main.cpp -o CMakeFiles/openmp.dir/main.cpp.s

# Object files for target openmp
openmp_OBJECTS = \
"CMakeFiles/openmp.dir/main.cpp.o"

# External object files for target openmp
openmp_EXTERNAL_OBJECTS =

openmp: CMakeFiles/openmp.dir/main.cpp.o
openmp: CMakeFiles/openmp.dir/build.make
openmp: CMakeFiles/openmp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fenghao/CLionProjects/openmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable openmp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/openmp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/openmp.dir/build: openmp

.PHONY : CMakeFiles/openmp.dir/build

CMakeFiles/openmp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/openmp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/openmp.dir/clean

CMakeFiles/openmp.dir/depend:
	cd /Users/fenghao/CLionProjects/openmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fenghao/CLionProjects/openmp /Users/fenghao/CLionProjects/openmp /Users/fenghao/CLionProjects/openmp/cmake-build-debug /Users/fenghao/CLionProjects/openmp/cmake-build-debug /Users/fenghao/CLionProjects/openmp/cmake-build-debug/CMakeFiles/openmp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/openmp.dir/depend
