
#include "Window/GLFW/JoyGLFWWindow.h"
#include "Window/JoyWindow.h"

namespace Joy
{
    class JoyWindowFactory
    {
    public:
        static JoyWindow* CreateWindow() 
        {
            return new JoyGLFWWindow();
        }
    };
}   // namespace Joy