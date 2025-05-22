#include <iostream>
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

int main()
{
	int ret = glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* pWindow = glfwCreateWindow(1280, 720, "Hello Vulkan", nullptr, nullptr);
	if (pWindow == nullptr)
	{
		glfwTerminate();
		std::cerr << "Error! Create GLFWwindow failed." << std::endl;
		return 0;
	}
	// 设置当前窗口为上下文
	glfwMakeContextCurrent(pWindow);
	// 开启vsync(垂直同步)
	glfwSwapInterval(1);
	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
	std::cout << extensionCount << "extensions supported" << std::endl;
	while (!glfwWindowShouldClose(pWindow))
	{
		glfwPollEvents();
	}
	glfwDestroyWindow(pWindow);
	glfwTerminate();
	return 0;
}