//
// Created by 22153 on 2/29/2024.
//

#ifndef LOGGER_H
#define LOGGER_H
#include <fstream>

#include "ILogger.h"


class Logger : public ILogger
{
public:
    explicit Logger(std::string_view log_file_name);

    virtual ~Logger();

    void setLogLevel(LogLevel level) override;

    void log(std::string_view message, LogLevel log_level) override;

    std::string_view getLogLevelString(LogLevel level) const;

    std::ofstream m_outputStream;
    LogLevel m_log_level{LogLevel::Error};
};


#endif //LOGGER_H
