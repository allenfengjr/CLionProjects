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
CMAKE_SOURCE_DIR = /Users/fenghao/CLionProjects/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fenghao/CLionProjects/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled1.dir/flags.make

CMakeFiles/untitled1.dir/main.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fenghao/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled1.dir/main.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/main.cpp.o -c /Users/fenghao/CLionProjects/untitled1/main.cpp

CMakeFiles/untitled1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/main.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fenghao/CLionProjects/untitled1/main.cpp > CMakeFiles/untitled1.dir/main.cpp.i

CMakeFiles/untitled1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/main.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fenghao/CLionProjects/untitled1/main.cpp -o CMakeFiles/untitled1.dir/main.cpp.s

CMakeFiles/untitled1.dir/id.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/id.cpp.o: ../id.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fenghao/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled1.dir/id.cpp.o"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/id.cpp.o -c /Users/fenghao/CLionProjects/untitled1/id.cpp

CMakeFiles/untitled1.dir/id.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/id.cpp.i"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fenghao/CLionProjects/untitled1/id.cpp > CMakeFiles/untitled1.dir/id.cpp.i

CMakeFiles/untitled1.dir/id.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/id.cpp.s"
	/usr/local/Cellar/gcc/9.2.0_3/bin/g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fenghao/CLionProjects/untitled1/id.cpp -o CMakeFiles/untitled1.dir/id.cpp.s

# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles/untitled1.dir/main.cpp.o" \
"CMakeFiles/untitled1.dir/id.cpp.o"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

untitled1: CMakeFiles/untitled1.dir/main.cpp.o
untitled1: CMakeFiles/untitled1.dir/id.cpp.o
untitled1: CMakeFiles/untitled1.dir/build.make
untitled1: /usr/local/lib/libopencv_gapi.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_stitching.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_aruco.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_bgsegm.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_bioinspired.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_ccalib.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_dnn_objdetect.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_dnn_superres.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_dpm.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_face.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_freetype.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_fuzzy.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_hfs.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_img_hash.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_line_descriptor.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_quality.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_reg.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_rgbd.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_saliency.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_sfm.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_stereo.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_structured_light.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_superres.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_surface_matching.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_tracking.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_videostab.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_xfeatures2d.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_xobjdetect.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_xphoto.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_highgui.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_shape.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_datasets.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_plot.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_text.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_dnn.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_ml.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_phase_unwrapping.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_optflow.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_ximgproc.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_video.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_videoio.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_imgcodecs.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_objdetect.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_calib3d.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_features2d.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_flann.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_photo.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_imgproc.4.2.0.dylib
untitled1: /usr/local/lib/libopencv_core.4.2.0.dylib
untitled1: CMakeFiles/untitled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fenghao/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable untitled1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled1.dir/build: untitled1

.PHONY : CMakeFiles/untitled1.dir/build

CMakeFiles/untitled1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled1.dir/clean

CMakeFiles/untitled1.dir/depend:
	cd /Users/fenghao/CLionProjects/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fenghao/CLionProjects/untitled1 /Users/fenghao/CLionProjects/untitled1 /Users/fenghao/CLionProjects/untitled1/cmake-build-debug /Users/fenghao/CLionProjects/untitled1/cmake-build-debug /Users/fenghao/CLionProjects/untitled1/cmake-build-debug/CMakeFiles/untitled1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled1.dir/depend
