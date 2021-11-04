cmake_minimum_required(VERSION 3.0.2)
set(This shared_pointer_tests)

set(Sources
	shared_ptr_tests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
gtest_main
shared_pointer
)

add_test(
NAME ${This}
COMMAND ${This}
)