# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /home/serj/Desktop/Programs/C++/Battleship

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/serj/Desktop/Programs/C++/Battleship/build

# Include any dependencies generated for this target.
include CMakeFiles/Battleship.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Battleship.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Battleship.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Battleship.dir/flags.make

CMakeFiles/Battleship.dir/Battleship.cpp.o: CMakeFiles/Battleship.dir/flags.make
CMakeFiles/Battleship.dir/Battleship.cpp.o: /home/serj/Desktop/Programs/C++/Battleship/Battleship.cpp
CMakeFiles/Battleship.dir/Battleship.cpp.o: CMakeFiles/Battleship.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serj/Desktop/Programs/C++/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Battleship.dir/Battleship.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Battleship.dir/Battleship.cpp.o -MF CMakeFiles/Battleship.dir/Battleship.cpp.o.d -o CMakeFiles/Battleship.dir/Battleship.cpp.o -c /home/serj/Desktop/Programs/C++/Battleship/Battleship.cpp

CMakeFiles/Battleship.dir/Battleship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Battleship.dir/Battleship.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serj/Desktop/Programs/C++/Battleship/Battleship.cpp > CMakeFiles/Battleship.dir/Battleship.cpp.i

CMakeFiles/Battleship.dir/Battleship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Battleship.dir/Battleship.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serj/Desktop/Programs/C++/Battleship/Battleship.cpp -o CMakeFiles/Battleship.dir/Battleship.cpp.s

# Object files for target Battleship
Battleship_OBJECTS = \
"CMakeFiles/Battleship.dir/Battleship.cpp.o"

# External object files for target Battleship
Battleship_EXTERNAL_OBJECTS =

Battleship: CMakeFiles/Battleship.dir/Battleship.cpp.o
Battleship: CMakeFiles/Battleship.dir/build.make
Battleship: CMakeFiles/Battleship.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serj/Desktop/Programs/C++/Battleship/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Battleship"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Battleship.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Battleship.dir/build: Battleship
.PHONY : CMakeFiles/Battleship.dir/build

CMakeFiles/Battleship.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Battleship.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Battleship.dir/clean

CMakeFiles/Battleship.dir/depend:
	cd /home/serj/Desktop/Programs/C++/Battleship/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serj/Desktop/Programs/C++/Battleship /home/serj/Desktop/Programs/C++/Battleship /home/serj/Desktop/Programs/C++/Battleship/build /home/serj/Desktop/Programs/C++/Battleship/build /home/serj/Desktop/Programs/C++/Battleship/build/CMakeFiles/Battleship.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Battleship.dir/depend

