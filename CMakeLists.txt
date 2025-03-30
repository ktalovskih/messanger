cmake_minimum_required(VERSION 3.10)

project(messanger LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)






# set(SRC_FILES
#     src/main.cpp
# )



add_subdirectory ("client")

add_subdirectory ("server")