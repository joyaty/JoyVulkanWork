#include <iostream>
#include "Window/GLFW/JoyGLFWWindow.h"
#include "Window/JoyWindow.h"
#include "Window/JoyWindowFactory.h"
#include <vulkan/vulkan.h>

int main()
{
    Joy::JoyWindow* pWindow = new Joy::JoyGLFWWindow();
    pWindow->CreateWindow("Hello Vulkan", 1280, 720);
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    std::cout << extensionCount << " extensions supported" << std::endl;
    while (!pWindow->IsShouleClose())
    {
        pWindow->PollEvents();
    }
    pWindow->DestroyWindow();

	delete pWindow;
	pWindow = nullptr;
	
    return 0;
}