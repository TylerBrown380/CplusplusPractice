# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ConstInClasses.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ConstInClasses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ConstInClasses.dir/flags.make

CMakeFiles/ConstInClasses.dir/main.cpp.obj: CMakeFiles/ConstInClasses.dir/flags.make
CMakeFiles/ConstInClasses.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ConstInClasses.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ConstInClasses.dir\main.cpp.obj -c E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\main.cpp

CMakeFiles/ConstInClasses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ConstInClasses.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\main.cpp > CMakeFiles\ConstInClasses.dir\main.cpp.i

CMakeFiles/ConstInClasses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ConstInClasses.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\main.cpp -o CMakeFiles\ConstInClasses.dir\main.cpp.s

# Object files for target ConstInClasses
ConstInClasses_OBJECTS = \
"CMakeFiles/ConstInClasses.dir/main.cpp.obj"

# External object files for target ConstInClasses
ConstInClasses_EXTERNAL_OBJECTS =

ConstInClasses.exe: CMakeFiles/ConstInClasses.dir/main.cpp.obj
ConstInClasses.exe: CMakeFiles/ConstInClasses.dir/build.make
ConstInClasses.exe: CMakeFiles/ConstInClasses.dir/linklibs.rsp
ConstInClasses.exe: CMakeFiles/ConstInClasses.dir/objects1.rsp
ConstInClasses.exe: CMakeFiles/ConstInClasses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ConstInClasses.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ConstInClasses.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ConstInClasses.dir/build: ConstInClasses.exe

.PHONY : CMakeFiles/ConstInClasses.dir/build

CMakeFiles/ConstInClasses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ConstInClasses.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ConstInClasses.dir/clean

CMakeFiles/ConstInClasses.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug E:\CplusplusProjects\Section13_ObjectsAndClasses\ConstInClasses\cmake-build-debug\CMakeFiles\ConstInClasses.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ConstInClasses.dir/depend
