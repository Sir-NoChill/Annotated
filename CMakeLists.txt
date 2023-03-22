cmake_minimum_required(VERSION 3.24)
project(Annotated)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Annotated main.cpp UI/uimain.cpp UI/uimain.h UI/uimain.ui Utilities/sample_class.cpp)
target_link_libraries(Annotated
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

add_subdirectory(Tests)
