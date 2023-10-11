cmake_minimum_required(VERSION 3.26)
project(ToDoList)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        ToDoList main.cpp
        data/Hashtag.h
        data/Priority.h
        classes/Task.cpp
        classes/Task.h
        classes/DateTimeTask.cpp
        classes/DateTimeTask.h
        classes/DateTime.cpp
        classes/DateTime.h
)

# Google Test
add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# set(TEST_SOURCE_FILES main.cpp)           ->> Aggiunta dei sorgenti coinvolti nel testing
#add_executable(testGoogleTest ${TEST_SOURCE_FILES})
#target_link_libraries(testGoogleTest gtest gtest_main core)


