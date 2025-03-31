
cmake_minimum_required(VERSION 3.10)
project(messenger_server)

# find_package(sodium REQUIRED)
find_package(Qt6 COMPONENTS Widgets Core Gui Sql REQUIRED)

# Add the client executable
add_executable(messenger_server src/main.cpp src/DatabaseManager.cpp)

# Include directories
target_include_directories(messenger_server PRIVATE ${SODIUM_INCLUDE_DIRS})

# Link Libsodium
#target_link_libraries(messenger_server PRIVATE sodium)
target_link_libraries(messenger_server PRIVATE Qt6::Core Qt6::Widgets Qt6::Sql ${SODIUM_LIBRARY})
