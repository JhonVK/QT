# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_1a42a.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cmTC_1a42a.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_1a42a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_1a42a.dir/flags.make

CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.obj: CMakeFiles/cmTC_1a42a.dir/flags.make
CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.obj: C:/mingw64/share/cmake-3.30/Modules/CMakeCXXCompilerABI.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir=C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cmTC_1a42a.dir\CMakeCXXCompilerABI.cpp.obj -c C:\mingw64\share\cmake-3.30\Modules\CMakeCXXCompilerABI.cpp

CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.i: cmake_force
	@echo Preprocessing CXX source to CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.i
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\mingw64\share\cmake-3.30\Modules\CMakeCXXCompilerABI.cpp > CMakeFiles\cmTC_1a42a.dir\CMakeCXXCompilerABI.cpp.i

CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.s: cmake_force
	@echo Compiling CXX source to assembly CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.s
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\mingw64\share\cmake-3.30\Modules\CMakeCXXCompilerABI.cpp -o CMakeFiles\cmTC_1a42a.dir\CMakeCXXCompilerABI.cpp.s

# Object files for target cmTC_1a42a
cmTC_1a42a_OBJECTS = \
"CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.obj"

# External object files for target cmTC_1a42a
cmTC_1a42a_EXTERNAL_OBJECTS =

cmTC_1a42a.exe: CMakeFiles/cmTC_1a42a.dir/CMakeCXXCompilerABI.cpp.obj
cmTC_1a42a.exe: CMakeFiles/cmTC_1a42a.dir/build.make
cmTC_1a42a.exe: CMakeFiles/cmTC_1a42a.dir/objects1.rsp
cmTC_1a42a.exe: CMakeFiles/cmTC_1a42a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --progress-dir=C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmTC_1a42a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmTC_1a42a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_1a42a.dir/build: cmTC_1a42a.exe
.PHONY : CMakeFiles/cmTC_1a42a.dir/build

CMakeFiles/cmTC_1a42a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmTC_1a42a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_1a42a.dir/clean

CMakeFiles/cmTC_1a42a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk C:\Users\joaov\Documents\QT\build\CMakeFiles\CMakeScratch\TryCompile-q2tauk\CMakeFiles\cmTC_1a42a.dir\DependInfo.cmake
.PHONY : CMakeFiles/cmTC_1a42a.dir/depend
