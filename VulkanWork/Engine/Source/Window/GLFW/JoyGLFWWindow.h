
#pragma once

#include "Window/JoyWindow.h"

class GLFWwindow;

namespace Joy
{
    // 基于GLFW的窗口实现类
    class JoyGLFWWindow : public JoyWindow
    {
    public:
        virtual ~JoyGLFWWindow();

    public:
        // 创建窗口
        virtual bool CreateWindow(const std::string& strTitle, int nWidth, int nHeight) override;
        // 销毁窗口
        virtual void DestroyWindow() override;
        // 获取窗口原生句柄
        virtual void* GetNativeHandle() const override;
        // 派发事件
        virtual void PollEvents() const override;
        // 窗口是否准备关闭
        virtual bool IsShouleClose() const override;

    private:
        // 键盘事件回调
        static void OnKeyboardCallback(GLFWwindow* window, int key, int scancode, int action,
                                       int mods);
        // 鼠标移动事件回调
        static void OnMouseMoveCallback(GLFWwindow* window, double xPos, double yPos);
        // 鼠标事件回调
        static void OnMouseBtnCallback(GLFWwindow* window, int button, int action, int mods);

    private:
        GLFWwindow* m_PtrWindow{nullptr};
    };
}   // namespace Joy
