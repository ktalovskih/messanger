cmake_minimum_required(VERSION 3.10)

project(messanger LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Find Qt and Libsodium
find_package(Qt6 COMPONENTS Widgets Core Gui Sql REQUIRED)
find_library(SODIUM_LIBRARY sodium REQUIRED)

# Add UI Files

qt6_wrap_ui(UI_HEADERS ${UI_FILES})

# Source Files
set(SRC_FILES
    src/main.cpp
)

add_executable(messanger ${SRC_FILES})

target_include_directories(messanger PRIVATE ${CMAKE_BINARY_DIR} hdr src)

target_link_libraries(messanger PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Sql ${SODIUM_LIBRARY})
