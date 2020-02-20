# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeUseDynamicLibrary")
set(TRY_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

include_directories(${TRY_INSTALL_INCLUDE_DIR})

if (WIN32)
	set(TRY_EXTERN_INCLUDE_DIR C:/prova/include)
endif (WIN32)
if (UNIX)
	set(TRY_EXTERN_INCLUDE_DIR /prova/include)
endif (UNIX)

include_directories(${TRY_EXTERN_INCLUDE_DIR})

# Include sub-projects.
add_subdirectory ("src")
