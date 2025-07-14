cmake_minimum_required(VERSION 3.10.0)

project(rjtext)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 CONFIG REQUIRED COMPONENTS Widgets)

add_executable(rjtext
	mainwindow.ui
	mainwindow.cpp
	main.cpp
	resources.qrc
)

target_link_libraries(rjtext
	Qt6::Widgets)
