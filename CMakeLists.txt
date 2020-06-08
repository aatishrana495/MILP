cmake_minimum_required(VERSION 2.8.3)
project(milp)

add_definitions(-std=c++11)

find_package(qt_build)

include_directories(include)

find_package(Qt4 REQUIRED COMPONENTS QtCore QtGui)
include(${QT_USE_FILE})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

################################################
## Find files
################################################
file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
set(QT_MOC include/milp/milp.h)
SET(QT_SOURCES src/milp.cpp)

################################################
## Setup QT
################################################
QT4_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT4_WRAP_CPP(QT_MOC_HPP ${QT_MOC})


###################################
## catkin specific configuration ##
###################################
include_directories(
	${QT_INCLUDE_DIRS}
)

add_library(milp_lib ${QT_SOURCES} ${QT_FORMS_HPP} ${QT_MOC_HPP})
target_link_libraries(milp_lib ${QT_LIBRARIES})

add_executable(milp src/main.cpp)
target_link_libraries(milp milp_lib)
