cmake_minimum_required(VERSION 3.0.2)
project(shared_pointer)

add_subdirectory(googletest)

set(sources main.cpp shared_pointer_test.cpp)
set(headers shared_pointer.h)

include_directories("${PROJECT_SOURCE_DIR}/headers"
 "googletest/googletest/include/")

add_executable(${PROJECT_NAME}
               ${sources}
               ${headers})

target_link_libraries(gtest)