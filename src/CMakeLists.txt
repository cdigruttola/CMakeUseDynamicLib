# CMakeList.txt : CMake project for CMakeUseDynamicLibrary, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_library(tryLib SHARED IMPORTED GLOBAL)
if (WIN32)
	set_target_properties(tryLib PROPERTIES IMPORTED_LOCATION "C:/prova/bin/tryLib.dll")
	set_property(TARGET tryLib PROPERTY IMPORTED_IMPLIB "C:/prova/lib/staticLib.lib")
endif (WIN32)
if (UNIX)
	set_target_properties(tryLib PROPERTIES IMPORTED_LOCATION "/prova/lib/libtryLib.so")
endif (UNIX)
# Add source to this project's executable.
add_executable (CMakeUseDynamicLibrary "main.cpp")
target_link_libraries(CMakeUseDynamicLibrary tryLib)
# TODO: Add tests and install targets if needed.
