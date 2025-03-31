

cmake_minimum_required(VERSION 3.10)
project(messenger_client)
#qt6_wrap_ui(UI_HEADERS ${UI_FILES})

find_package(Qt6 COMPONENTS Widgets Core Gui Sql REQUIRED)

add_executable(messenger_client src/main.cpp)

target_include_directories(messenger_client PRIVATE ${SODIUM_INCLUDE_DIRS})

target_link_libraries(messenger_client PRIVATE Qt6::Core Qt6::Widgets Qt6::Sql ${SODIUM_LIBRARY})
