cmake_minimum_required(VERSION 3.10.0)
project(8-Ball-Pool VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(fmt CONFIG REQUIRED)
find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(8-Ball-Pool
    src/main.cpp
    src/mainwindow.cpp
    src/mainwindow.h
    src/mainwindow.ui)
target_link_libraries(8-Ball-Pool PRIVATE fmt::fmt)
target_link_libraries(8-Ball-Pool PRIVATE Qt6::Widgets)

include(CTest)
enable_testing()
