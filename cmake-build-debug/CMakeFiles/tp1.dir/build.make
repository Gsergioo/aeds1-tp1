# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = "/home/lazarus/Área de Trabalho/clion-2019.1.4/bin/cmake/linux/bin/cmake"

# The command to remove a file.
RM = "/home/lazarus/Área de Trabalho/clion-2019.1.4/bin/cmake/linux/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/tp1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp1.dir/flags.make

CMakeFiles/tp1.dir/main.c.o: CMakeFiles/tp1.dir/flags.make
CMakeFiles/tp1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/tp1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tp1.dir/main.c.o   -c "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/main.c"

CMakeFiles/tp1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tp1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/main.c" > CMakeFiles/tp1.dir/main.c.i

CMakeFiles/tp1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tp1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/main.c" -o CMakeFiles/tp1.dir/main.c.s

CMakeFiles/tp1.dir/Matriz.c.o: CMakeFiles/tp1.dir/flags.make
CMakeFiles/tp1.dir/Matriz.c.o: ../Matriz.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/tp1.dir/Matriz.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tp1.dir/Matriz.c.o   -c "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Matriz.c"

CMakeFiles/tp1.dir/Matriz.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tp1.dir/Matriz.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Matriz.c" > CMakeFiles/tp1.dir/Matriz.c.i

CMakeFiles/tp1.dir/Matriz.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tp1.dir/Matriz.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Matriz.c" -o CMakeFiles/tp1.dir/Matriz.c.s

CMakeFiles/tp1.dir/Compra.c.o: CMakeFiles/tp1.dir/flags.make
CMakeFiles/tp1.dir/Compra.c.o: ../Compra.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/tp1.dir/Compra.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tp1.dir/Compra.c.o   -c "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Compra.c"

CMakeFiles/tp1.dir/Compra.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tp1.dir/Compra.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Compra.c" > CMakeFiles/tp1.dir/Compra.c.i

CMakeFiles/tp1.dir/Compra.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tp1.dir/Compra.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/Compra.c" -o CMakeFiles/tp1.dir/Compra.c.s

# Object files for target tp1
tp1_OBJECTS = \
"CMakeFiles/tp1.dir/main.c.o" \
"CMakeFiles/tp1.dir/Matriz.c.o" \
"CMakeFiles/tp1.dir/Compra.c.o"

# External object files for target tp1
tp1_EXTERNAL_OBJECTS =

tp1: CMakeFiles/tp1.dir/main.c.o
tp1: CMakeFiles/tp1.dir/Matriz.c.o
tp1: CMakeFiles/tp1.dir/Compra.c.o
tp1: CMakeFiles/tp1.dir/build.make
tp1: CMakeFiles/tp1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable tp1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp1.dir/build: tp1

.PHONY : CMakeFiles/tp1.dir/build

CMakeFiles/tp1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp1.dir/clean

CMakeFiles/tp1.dir/depend:
	cd "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/TPs/aeds1-tp1/cmake-build-debug/CMakeFiles/tp1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/tp1.dir/depend

