cmake_minimum_required(VERSION 3.15)

project(solution CXX)
set(CMAKE_CXX_STANDARD 17) # change this based on your interview needs
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler Warning flags Link this 'library' to use the warnings specified in
# CompilerWarnings.cmake
add_library(project_warnings INTERFACE)
include(CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# add source files here - see the example below for simplicity, have header
# files in the same directory (everything is top level) so all you need to
# specify are source files
add_executable(${PROJECT_NAME} solution.cpp header.cpp)

# For Conan dependencies
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS) # introduce Conan-generated targets
target_link_libraries(${PROJECT_NAME} CONAN_PKG::fmt)
