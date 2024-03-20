cmake_minimum_required(VERSION 3.14)
project(DoublyLinkedList)

set(SOURCES
    src/DoublyLinkedList.cpp
    src/main.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Locate GTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
add_executable(runTests test/test.cpp src/DoublyLinkedList.cpp)

# Link against Google Test library
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
