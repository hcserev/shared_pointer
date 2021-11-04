cmake_minimum_required(VERSION 3.0.2)
project(shared_pointer)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)

set(headers shared_pointer.h)
set(sources main.cpp)


include_directories("${PROJECT_SOURCE_DIR}/headers"
 "googletest/googletest/include/")

add_library(${PROJECT_NAME} STATIC
               ${sources}
               ${headers})

add_subdirectory(test)

target_link_libraries(gtest
)
