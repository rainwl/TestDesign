//
// Created by 22153 on 2/29/2024.
//

#ifndef ILOGGER_H
#define ILOGGER_H
#include <string_view>
#include <variant>


class ILogger
{
public:
    virtual ~ILogger() = default;

    enum class LogLevel
    {
        Error,
        Info,
        Debug
    };

    virtual void setLogLevel(LogLevel level) = 0;

    virtual void log(std::string_view message, LogLevel log_level) = 0;
};


#endif //ILOGGER_H
