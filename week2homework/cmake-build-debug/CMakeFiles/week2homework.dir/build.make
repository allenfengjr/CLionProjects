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
CMAKE_SOURCE_DIR = /Users/fenghao/CLionProjects/week2homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fenghao/CLionProjects/week2homework/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/week2homework.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week2homework.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week2homework.dir/flags.make

CMakeFiles/week2homework.dir/week2homework.cpp.o: CMakeFiles/week2homework.dir/flags.make
CMakeFiles/week2homework.dir/week2homework.cpp.o: week2homework.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fenghao/CLionProjects/week2homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week2homework.dir/week2homework.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/week2homework.dir/week2homework.cpp.o -c /Users/fenghao/CLionProjects/week2homework/cmake-build-debug/week2homework.cpp

CMakeFiles/week2homework.dir/week2homework.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week2homework.dir/week2homework.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fenghao/CLionProjects/week2homework/cmake-build-debug/week2homework.cpp > CMakeFiles/week2homework.dir/week2homework.cpp.i

CMakeFiles/week2homework.dir/week2homework.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week2homework.dir/week2homework.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fenghao/CLionProjects/week2homework/cmake-build-debug/week2homework.cpp -o CMakeFiles/week2homework.dir/week2homework.cpp.s

# Object files for target week2homework
week2homework_OBJECTS = \
"CMakeFiles/week2homework.dir/week2homework.cpp.o"

# External object files for target week2homework
week2homework_EXTERNAL_OBJECTS =

week2homework: CMakeFiles/week2homework.dir/week2homework.cpp.o
week2homework: CMakeFiles/week2homework.dir/build.make
week2homework: CMakeFiles/week2homework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fenghao/CLionProjects/week2homework/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week2homework"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week2homework.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week2homework.dir/build: week2homework

.PHONY : CMakeFiles/week2homework.dir/build

CMakeFiles/week2homework.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week2homework.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week2homework.dir/clean

CMakeFiles/week2homework.dir/depend:
	cd /Users/fenghao/CLionProjects/week2homework/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fenghao/CLionProjects/week2homework /Users/fenghao/CLionProjects/week2homework /Users/fenghao/CLionProjects/week2homework/cmake-build-debug /Users/fenghao/CLionProjects/week2homework/cmake-build-debug /Users/fenghao/CLionProjects/week2homework/cmake-build-debug/CMakeFiles/week2homework.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week2homework.dir/depend

