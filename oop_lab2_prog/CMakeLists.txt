cmake_minimum_required(VERSION 3.10)
project(GTestProject)

set(CMAKE_BUILD_TYPE Debug) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(src)

set(SOURCE_FILES src/lab2.cpp)
set(TEST_FILES tests/tests.cpp)

add_executable(runTests ${SOURCE_FILES} ${TEST_FILES})

target_link_libraries(runTests GTest::GTest GTest::Main pthread)
