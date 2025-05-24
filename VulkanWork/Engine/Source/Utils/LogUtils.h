
#pragma once

namespace Joy
{
    // 日志打印工具类
    class LogUtil
    {
    public:
        // Debug级别的日志信息
        static void Debug(const char* content);
        // Warning级别的日志信息
        static void Waring(const char* content);
        // Error级别的日志信息
        static void Error(const char* content);
    };
}   // namespace Joy