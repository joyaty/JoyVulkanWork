## CMake版本声明
cmake_minimum_required(VERSION 3.15)

## 子项目名
set(SUB_PROJECT JoyEngine)

## 添加GLFW的头文件引用目录
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/Source")
include_directories("${CMAKE_SOURCE_DIR}/ThirdParts/GLFW/include")

## 递归收集Source文件夹下的所有.cpp文件
file(GLOB_RECURSE ALL_SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.cpp")
## 递归收集Source文件夹下的所有.h文件
file(GLOB_RECURSE ALL_H_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Source/*.h")

## 添加外部依赖库集合
set(COMMON_LIBS
glfw
Vulkan::Vulkan)

## 编译为库
add_library(${SUB_PROJECT} ${ALL_SRC_FILES} ${ALL_H_FILES})
## 链接依赖库
target_link_libraries(${SUB_PROJECT} ${COMMON_LIBS})

