# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brianton/Desktop/CAS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brianton/Desktop/CAS

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/local/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/brianton/Desktop/CAS/CMakeFiles /home/brianton/Desktop/CAS/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/brianton/Desktop/CAS/CMakeFiles 0
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
# Target rules for targets named cas

# Build rule for target.
cas: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cas
.PHONY : cas

# fast build rule for target.
cas/fast:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/build
.PHONY : cas/fast

src/Constant.o: src/Constant.cpp.o

.PHONY : src/Constant.o

# target to build an object file
src/Constant.cpp.o:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Constant.cpp.o
.PHONY : src/Constant.cpp.o

src/Constant.i: src/Constant.cpp.i

.PHONY : src/Constant.i

# target to preprocess a source file
src/Constant.cpp.i:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Constant.cpp.i
.PHONY : src/Constant.cpp.i

src/Constant.s: src/Constant.cpp.s

.PHONY : src/Constant.s

# target to generate assembly for a file
src/Constant.cpp.s:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Constant.cpp.s
.PHONY : src/Constant.cpp.s

src/Numbers.o: src/Numbers.cpp.o

.PHONY : src/Numbers.o

# target to build an object file
src/Numbers.cpp.o:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Numbers.cpp.o
.PHONY : src/Numbers.cpp.o

src/Numbers.i: src/Numbers.cpp.i

.PHONY : src/Numbers.i

# target to preprocess a source file
src/Numbers.cpp.i:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Numbers.cpp.i
.PHONY : src/Numbers.cpp.i

src/Numbers.s: src/Numbers.cpp.s

.PHONY : src/Numbers.s

# target to generate assembly for a file
src/Numbers.cpp.s:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/Numbers.cpp.s
.PHONY : src/Numbers.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/cas.dir/build.make CMakeFiles/cas.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... cas"
	@echo "... src/Constant.o"
	@echo "... src/Constant.i"
	@echo "... src/Constant.s"
	@echo "... src/Numbers.o"
	@echo "... src/Numbers.i"
	@echo "... src/Numbers.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

