
#include "JoyGLFWWindow.h"
#include "GLFW/glfw3.h"
#include "Utils/LogUtils.h"
#include <GLFW/glfw3.h>

namespace Joy
{
    JoyGLFWWindow::~JoyGLFWWindow()
    {
        if (m_PtrWindow)
        {
            DestroyWindow();
        }
    }

    bool JoyGLFWWindow::CreateWindow(const std::string& strTitle, int nWidth, int nHeight)
    {
        // GLFW初始化
        int ret = glfwInit();
        if (ret != GLFW_TRUE)
        {
            LogUtil::Error("glfwInit failed");
            return false;
        }
        // 使用Vulkan作为渲染API，因此禁止OpenGL上下文。
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        // 创建窗口
        m_PtrWindow = glfwCreateWindow(nWidth, nHeight, strTitle.c_str(), nullptr, nullptr);
        if (!m_PtrWindow)
        {
            LogUtil::Error("glfwCreateWindow failed");
            return false;
        }
        // 注册键盘事件
        glfwSetKeyCallback(m_PtrWindow, JoyGLFWWindow::OnKeyboardCallback);
        // 注册光标移动事件
        glfwSetCursorPosCallback(m_PtrWindow, JoyGLFWWindow::OnMouseMoveCallback);
        // 注册鼠标按钮事件
        glfwSetMouseButtonCallback(m_PtrWindow, JoyGLFWWindow::OnMouseBtnCallback);

        return true;
    }

    void JoyGLFWWindow::DestroyWindow()
    {
        if (m_PtrWindow)
        {
            glfwDestroyWindow(m_PtrWindow);
            m_PtrWindow = nullptr;
        }
        glfwTerminate();
    }

    void JoyGLFWWindow::PollEvents() const
    {
        glfwPollEvents();
    }

    bool JoyGLFWWindow::IsShouleClose() const
    {
        return glfwWindowShouldClose(m_PtrWindow);
    }

    void* JoyGLFWWindow::GetNativeHandle() const
    {
        return nullptr;
    }

#pragma region 输入事件回调

    void JoyGLFWWindow::OnKeyboardCallback(GLFWwindow* window, int key, int scancode, int action,
                                           int mods)
    {
        // TODO 接入输入系统处理
    }

    // 鼠标移动事件回调
    void JoyGLFWWindow::OnMouseMoveCallback(GLFWwindow* window, double xPos, double yPos)
    {
        // TODO 接入输入系统处理
    }

    // 鼠标事件回调
    void JoyGLFWWindow::OnMouseBtnCallback(GLFWwindow* window, int button, int action, int mods)
    {
        // TODO 接入输入系统处理
    }

#pragma endregion
}   // namespace Joy
