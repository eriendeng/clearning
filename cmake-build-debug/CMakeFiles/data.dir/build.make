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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/erien/CLionProjects/数据结构

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/erien/CLionProjects/数据结构/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/data.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/data.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/data.dir/flags.make

CMakeFiles/data.dir/listReverse.c.o: CMakeFiles/data.dir/flags.make
CMakeFiles/data.dir/listReverse.c.o: ../listReverse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/erien/CLionProjects/数据结构/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/data.dir/listReverse.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/data.dir/listReverse.c.o   -c /Users/erien/CLionProjects/数据结构/listReverse.c

CMakeFiles/data.dir/listReverse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/data.dir/listReverse.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/erien/CLionProjects/数据结构/listReverse.c > CMakeFiles/data.dir/listReverse.c.i

CMakeFiles/data.dir/listReverse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/data.dir/listReverse.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/erien/CLionProjects/数据结构/listReverse.c -o CMakeFiles/data.dir/listReverse.c.s

CMakeFiles/data.dir/listReverse.c.o.requires:

.PHONY : CMakeFiles/data.dir/listReverse.c.o.requires

CMakeFiles/data.dir/listReverse.c.o.provides: CMakeFiles/data.dir/listReverse.c.o.requires
	$(MAKE) -f CMakeFiles/data.dir/build.make CMakeFiles/data.dir/listReverse.c.o.provides.build
.PHONY : CMakeFiles/data.dir/listReverse.c.o.provides

CMakeFiles/data.dir/listReverse.c.o.provides.build: CMakeFiles/data.dir/listReverse.c.o


# Object files for target data
data_OBJECTS = \
"CMakeFiles/data.dir/listReverse.c.o"

# External object files for target data
data_EXTERNAL_OBJECTS =

data: CMakeFiles/data.dir/listReverse.c.o
data: CMakeFiles/data.dir/build.make
data: CMakeFiles/data.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/erien/CLionProjects/数据结构/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable data"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/data.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/data.dir/build: data

.PHONY : CMakeFiles/data.dir/build

CMakeFiles/data.dir/requires: CMakeFiles/data.dir/listReverse.c.o.requires

.PHONY : CMakeFiles/data.dir/requires

CMakeFiles/data.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/data.dir/cmake_clean.cmake
.PHONY : CMakeFiles/data.dir/clean

CMakeFiles/data.dir/depend:
	cd /Users/erien/CLionProjects/数据结构/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/erien/CLionProjects/数据结构 /Users/erien/CLionProjects/数据结构 /Users/erien/CLionProjects/数据结构/cmake-build-debug /Users/erien/CLionProjects/数据结构/cmake-build-debug /Users/erien/CLionProjects/数据结构/cmake-build-debug/CMakeFiles/data.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/data.dir/depend
