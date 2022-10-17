cmake_minimum_required(VERSION 3.21)
project(quiz)

set(CMAKE_CXX_STANDARD 17)

add_executable(quiz main.cpp Question.cpp Question.h Quiz.cpp Quiz.h Answer.cpp Answer.h)
