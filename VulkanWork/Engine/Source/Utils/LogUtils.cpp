
#include "LogUtils.h"
#include <iostream>

namespace Joy
{
    // Debug级别的日志信息
    void LogUtil::Debug(const char* content)
    {
        std::cout << content << std::endl;
    }
    
    // Warning级别的日志信息
    void LogUtil::Waring(const char* content)
    {
        std::cerr << content << std::endl;
    }
    
    // Error级别的日志信息
    void LogUtil::Error(const char* content) 
    {
        std::cerr << content << std::endl;
    }
}   // namespace Joy