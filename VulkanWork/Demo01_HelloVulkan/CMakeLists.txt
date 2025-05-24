cmake_minimum_required(VERSION 3.15)

set(SUB_PROJECT Demo01_HelloVulkan)

include_directories("${CMAKE_SOURCE_DIR}/VulkanWork/Engine/Source")

file(GLOB ALL_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp)

set(COMMON_LIBS
JoyEngine
Vulkan::Vulkan)

add_executable(${SUB_PROJECT} ${ALL_SRC_FILES})
target_link_libraries(${SUB_PROJECT} ${COMMON_LIBS})