# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build

# Include any dependencies generated for this target.
include CMakeFiles/imageviewer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/imageviewer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imageviewer.dir/flags.make

CMakeFiles/imageviewer.dir/imageviewer.cpp.o: CMakeFiles/imageviewer.dir/flags.make
CMakeFiles/imageviewer.dir/imageviewer.cpp.o: ../imageviewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imageviewer.dir/imageviewer.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imageviewer.dir/imageviewer.cpp.o -c /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/imageviewer.cpp

CMakeFiles/imageviewer.dir/imageviewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imageviewer.dir/imageviewer.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/imageviewer.cpp > CMakeFiles/imageviewer.dir/imageviewer.cpp.i

CMakeFiles/imageviewer.dir/imageviewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imageviewer.dir/imageviewer.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/imageviewer.cpp -o CMakeFiles/imageviewer.dir/imageviewer.cpp.s

CMakeFiles/imageviewer.dir/imageviewer.cpp.o.requires:

.PHONY : CMakeFiles/imageviewer.dir/imageviewer.cpp.o.requires

CMakeFiles/imageviewer.dir/imageviewer.cpp.o.provides: CMakeFiles/imageviewer.dir/imageviewer.cpp.o.requires
	$(MAKE) -f CMakeFiles/imageviewer.dir/build.make CMakeFiles/imageviewer.dir/imageviewer.cpp.o.provides.build
.PHONY : CMakeFiles/imageviewer.dir/imageviewer.cpp.o.provides

CMakeFiles/imageviewer.dir/imageviewer.cpp.o.provides.build: CMakeFiles/imageviewer.dir/imageviewer.cpp.o


CMakeFiles/imageviewer.dir/main.cpp.o: CMakeFiles/imageviewer.dir/flags.make
CMakeFiles/imageviewer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/imageviewer.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imageviewer.dir/main.cpp.o -c /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/main.cpp

CMakeFiles/imageviewer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imageviewer.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/main.cpp > CMakeFiles/imageviewer.dir/main.cpp.i

CMakeFiles/imageviewer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imageviewer.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/main.cpp -o CMakeFiles/imageviewer.dir/main.cpp.s

CMakeFiles/imageviewer.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/imageviewer.dir/main.cpp.o.requires

CMakeFiles/imageviewer.dir/main.cpp.o.provides: CMakeFiles/imageviewer.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/imageviewer.dir/build.make CMakeFiles/imageviewer.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/imageviewer.dir/main.cpp.o.provides

CMakeFiles/imageviewer.dir/main.cpp.o.provides.build: CMakeFiles/imageviewer.dir/main.cpp.o


CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o: CMakeFiles/imageviewer.dir/flags.make
CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o: imageviewer_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o -c /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/imageviewer_automoc.cpp

CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/imageviewer_automoc.cpp > CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.i

CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/imageviewer_automoc.cpp -o CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.s

CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.requires:

.PHONY : CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.requires

CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.provides: CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.requires
	$(MAKE) -f CMakeFiles/imageviewer.dir/build.make CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.provides.build
.PHONY : CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.provides

CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.provides.build: CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o


# Object files for target imageviewer
imageviewer_OBJECTS = \
"CMakeFiles/imageviewer.dir/imageviewer.cpp.o" \
"CMakeFiles/imageviewer.dir/main.cpp.o" \
"CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o"

# External object files for target imageviewer
imageviewer_EXTERNAL_OBJECTS =

imageviewer: CMakeFiles/imageviewer.dir/imageviewer.cpp.o
imageviewer: CMakeFiles/imageviewer.dir/main.cpp.o
imageviewer: CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o
imageviewer: CMakeFiles/imageviewer.dir/build.make
imageviewer: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.5.1
imageviewer: /usr/local/lib/libopencv_videostab.so.3.4.7
imageviewer: /usr/local/lib/libopencv_dnn.so.3.4.7
imageviewer: /usr/local/lib/libopencv_highgui.so.3.4.7
imageviewer: /usr/local/lib/libopencv_ml.so.3.4.7
imageviewer: /usr/local/lib/libopencv_stitching.so.3.4.7
imageviewer: /usr/local/lib/libopencv_shape.so.3.4.7
imageviewer: /usr/local/lib/libopencv_photo.so.3.4.7
imageviewer: /usr/local/lib/libopencv_superres.so.3.4.7
imageviewer: /usr/local/lib/libopencv_objdetect.so.3.4.7
imageviewer: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
imageviewer: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
imageviewer: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
imageviewer: /usr/local/lib/libopencv_video.so.3.4.7
imageviewer: /usr/local/lib/libopencv_videoio.so.3.4.7
imageviewer: /usr/local/lib/libopencv_imgcodecs.so.3.4.7
imageviewer: /usr/local/lib/libopencv_calib3d.so.3.4.7
imageviewer: /usr/local/lib/libopencv_features2d.so.3.4.7
imageviewer: /usr/local/lib/libopencv_imgproc.so.3.4.7
imageviewer: /usr/local/lib/libopencv_flann.so.3.4.7
imageviewer: /usr/local/lib/libopencv_core.so.3.4.7
imageviewer: CMakeFiles/imageviewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable imageviewer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imageviewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imageviewer.dir/build: imageviewer

.PHONY : CMakeFiles/imageviewer.dir/build

CMakeFiles/imageviewer.dir/requires: CMakeFiles/imageviewer.dir/imageviewer.cpp.o.requires
CMakeFiles/imageviewer.dir/requires: CMakeFiles/imageviewer.dir/main.cpp.o.requires
CMakeFiles/imageviewer.dir/requires: CMakeFiles/imageviewer.dir/imageviewer_automoc.cpp.o.requires

.PHONY : CMakeFiles/imageviewer.dir/requires

CMakeFiles/imageviewer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imageviewer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imageviewer.dir/clean

CMakeFiles/imageviewer.dir/depend:
	cd /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build /home/hongqingxiang/Workspace/github.work/sandbox2/imageviewer/build/CMakeFiles/imageviewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imageviewer.dir/depend

