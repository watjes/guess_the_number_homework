cmake_minimum_required(VERSION 3.8)

project(guess_the_number CXX)

add_executable(guess guess_the_number.cpp rand_value.cpp check_value.cpp high_scores.cpp)

target_compile_features(guess PUBLIC cxx_std_17)

if(MSVC)
    target_compile_options(guess PUBLIC /W4 /WX)
else()
    target_compile_options(guess PUBLIC -Wall -Wextra -Werror -pedantic)
endif()
