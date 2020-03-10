cmake_minimum_required(VERSION 3.1.0)

project(imageviewer)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set (CMAKE_CXX_STANDARD 11)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS PrintSupport REQUIRED)
find_package (OpenCV REQUIRED)

include_directories (${OpenCV_INCLUDE_DIRS})

add_executable(imageviewer
    imageviewer.cpp
    main.cpp
)

target_link_libraries(imageviewer Qt5::Widgets Qt5::Core Qt5::PrintSupport ${OpenCV_LIBS})
