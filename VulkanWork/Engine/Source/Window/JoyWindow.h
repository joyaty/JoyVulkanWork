
#pragma once

#include <string>

namespace Joy
{
    // Window窗口抽象基类
    class JoyWindow
    {
    public:
        virtual ~JoyWindow(){};

    public:
        // 创建窗口
        virtual bool CreateWindow(const std::string& strTitle, int nWidth, int nHeight) = 0;
        // 销毁窗口
        virtual void DestroyWindow() = 0;
        // 获取窗口原生句柄
        virtual void* GetNativeHandle() const = 0;
        // 派发输入事件
        virtual void PollEvents() const = 0;
        // 窗口是否准备关闭
        virtual bool IsShouleClose() const = 0;
    };
}   // namespace Joy
