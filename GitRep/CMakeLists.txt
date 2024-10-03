cmake_minimum_required(VERSION 3.5)
project(GraphicS VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(STATIC_BUILD "Enable static build" ON)

find_package(FLTK REQUIRED CONFIG)
find_package(FLTK REQUIRED NO_MODULE)
include_directories(${FLTK_DIR})

set(PROJECT_LIBS
		Libraries/fltk.h
		Libraries/Graph.h
		Libraries/GUI.h
		Libraries/Simple_window.h
		Libraries/std_lib_facilities.h
		Libraries/Window.h
		Graph.cpp
		GUI.cpp
		Simple_window.cpp
		main.cpp
		Window.cpp
		)

set(FLTK_LIBRARIES fltk fltk_forms fltk_images fltk_gl )
message(STATUS "FLTK_LIBRARIES  = '${FLTK_LIBRARIES}'")

file(GLOB PROJECT_FILES "*.cpp")
add_executable(${PROJECT_NAME} ${PROJECT_LIBS})

target_link_libraries(${PROJECT_NAME} ${FLTK_LIBRARIES} FLTK)



