
#include <string>

class JoyWindow
{
public:
    // 创建窗口
    virtual void CreateWindow(const std::string& strTitle, int nWidth, int nHeight) = 0;
    // 获取窗口原生句柄
    virtual void* GetNativeHandle() const = 0;
};