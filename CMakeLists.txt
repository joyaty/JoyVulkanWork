cmake_minimum_required(VERSION 3.15)

project(JoyVulkanWork)

find_package(Vulkan REQUIRED)

## CPP版本
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
## 添加UNICODE/_UNICODE宏 使用unicode字符集
add_definitions(-DUNICODE -D_UNICODE)
## 启用文件夹组织层级
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

## 第三方库-GLFW
add_subdirectory(${CMAKE_SOURCE_DIR}/ThirdParts/GLFW)

## Demo01 - HelloVulkan
add_subdirectory(${CMAKE_SOURCE_DIR}/VulkanWork/Demo01_HelloVulkan)