cmake_minimum_required(VERSION 3.0.2)
project(shared_pointer)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(googletest)

set(headers shared_pointer.h)

include_directories("${PROJECT_SOURCE_DIR}/headers"
 "googletest/googletest/include/")

add_library(${PROJECT_NAME} STATIC
               ${headers})

add_subdirectory(shared_ptr_tests)

target_link_libraries(gtest
)
