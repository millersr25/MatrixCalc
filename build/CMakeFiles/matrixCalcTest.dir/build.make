# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/millersam/MatrixCalc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/millersam/MatrixCalc/build

# Include any dependencies generated for this target.
include CMakeFiles/matrixCalcTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/matrixCalcTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/matrixCalcTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/matrixCalcTest.dir/flags.make

CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o: CMakeFiles/matrixCalcTest.dir/flags.make
CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o: /home/millersam/MatrixCalc/src/matrix.cpp
CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o: CMakeFiles/matrixCalcTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/millersam/MatrixCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o -MF CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o.d -o CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o -c /home/millersam/MatrixCalc/src/matrix.cpp

CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/millersam/MatrixCalc/src/matrix.cpp > CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.i

CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/millersam/MatrixCalc/src/matrix.cpp -o CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.s

CMakeFiles/matrixCalcTest.dir/test/test.cpp.o: CMakeFiles/matrixCalcTest.dir/flags.make
CMakeFiles/matrixCalcTest.dir/test/test.cpp.o: /home/millersam/MatrixCalc/test/test.cpp
CMakeFiles/matrixCalcTest.dir/test/test.cpp.o: CMakeFiles/matrixCalcTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/millersam/MatrixCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/matrixCalcTest.dir/test/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/matrixCalcTest.dir/test/test.cpp.o -MF CMakeFiles/matrixCalcTest.dir/test/test.cpp.o.d -o CMakeFiles/matrixCalcTest.dir/test/test.cpp.o -c /home/millersam/MatrixCalc/test/test.cpp

CMakeFiles/matrixCalcTest.dir/test/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/matrixCalcTest.dir/test/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/millersam/MatrixCalc/test/test.cpp > CMakeFiles/matrixCalcTest.dir/test/test.cpp.i

CMakeFiles/matrixCalcTest.dir/test/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/matrixCalcTest.dir/test/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/millersam/MatrixCalc/test/test.cpp -o CMakeFiles/matrixCalcTest.dir/test/test.cpp.s

# Object files for target matrixCalcTest
matrixCalcTest_OBJECTS = \
"CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o" \
"CMakeFiles/matrixCalcTest.dir/test/test.cpp.o"

# External object files for target matrixCalcTest
matrixCalcTest_EXTERNAL_OBJECTS =

matrixCalcTest: CMakeFiles/matrixCalcTest.dir/src/matrix.cpp.o
matrixCalcTest: CMakeFiles/matrixCalcTest.dir/test/test.cpp.o
matrixCalcTest: CMakeFiles/matrixCalcTest.dir/build.make
matrixCalcTest: CMakeFiles/matrixCalcTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/millersam/MatrixCalc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable matrixCalcTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixCalcTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/matrixCalcTest.dir/build: matrixCalcTest
.PHONY : CMakeFiles/matrixCalcTest.dir/build

CMakeFiles/matrixCalcTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/matrixCalcTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/matrixCalcTest.dir/clean

CMakeFiles/matrixCalcTest.dir/depend:
	cd /home/millersam/MatrixCalc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/millersam/MatrixCalc /home/millersam/MatrixCalc /home/millersam/MatrixCalc/build /home/millersam/MatrixCalc/build /home/millersam/MatrixCalc/build/CMakeFiles/matrixCalcTest.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/matrixCalcTest.dir/depend

