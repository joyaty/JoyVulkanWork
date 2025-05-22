cmake_minimum_required(VERSION 3.15)

set(SUB_PROJECT Demo01_HelloVulkan)

include_directories("${CMAKE_SOURCE_DIR}/ThirdParts/GLFW/include")

file(GLOB ALL_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp)

message(STATUS "ALL_SRC_FILES = ${ALL_SRC_FILES}")

set(COMMON_LIBS
glfw
Vulkan::Vulkan)

add_executable(${SUB_PROJECT} ${ALL_SRC_FILES})
target_link_libraries(${SUB_PROJECT} ${COMMON_LIBS})