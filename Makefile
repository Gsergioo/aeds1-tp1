# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/tp1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/tp1/cmake-build-debug"

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"/home/lazarus/Área de Trabalho/clion-2019.1.4/bin/cmake/linux/bin/cmake" -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"/home/lazarus/Área de Trabalho/clion-2019.1.4/bin/cmake/linux/bin/cmake" -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/tp1/cmake-build-debug/CMakeFiles" "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/tp1/cmake-build-debug/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/home/lazarus/Área de Trabalho/UFV/2_Semestre/AEDS1/tp1/cmake-build-debug/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named tp1

# Build rule for target.
tp1: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 tp1
.PHONY : tp1

# fast build rule for target.
tp1/fast:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/build
.PHONY : tp1/fast

Compra.o: Compra.c.o

.PHONY : Compra.o

# target to build an object file
Compra.c.o:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Compra.c.o
.PHONY : Compra.c.o

Compra.i: Compra.c.i

.PHONY : Compra.i

# target to preprocess a source file
Compra.c.i:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Compra.c.i
.PHONY : Compra.c.i

Compra.s: Compra.c.s

.PHONY : Compra.s

# target to generate assembly for a file
Compra.c.s:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Compra.c.s
.PHONY : Compra.c.s

Matriz.o: Matriz.c.o

.PHONY : Matriz.o

# target to build an object file
Matriz.c.o:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Matriz.c.o
.PHONY : Matriz.c.o

Matriz.i: Matriz.c.i

.PHONY : Matriz.i

# target to preprocess a source file
Matriz.c.i:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Matriz.c.i
.PHONY : Matriz.c.i

Matriz.s: Matriz.c.s

.PHONY : Matriz.s

# target to generate assembly for a file
Matriz.c.s:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/Matriz.c.s
.PHONY : Matriz.c.s

main.o: main.c.o

.PHONY : main.o

# target to build an object file
main.c.o:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/main.c.o
.PHONY : main.c.o

main.i: main.c.i

.PHONY : main.i

# target to preprocess a source file
main.c.i:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/main.c.i
.PHONY : main.c.i

main.s: main.c.s

.PHONY : main.s

# target to generate assembly for a file
main.c.s:
	$(MAKE) -f CMakeFiles/tp1.dir/build.make CMakeFiles/tp1.dir/main.c.s
.PHONY : main.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... tp1"
	@echo "... edit_cache"
	@echo "... Compra.o"
	@echo "... Compra.i"
	@echo "... Compra.s"
	@echo "... Matriz.o"
	@echo "... Matriz.i"
	@echo "... Matriz.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
