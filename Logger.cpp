//
// Created by 22153 on 2/29/2024.
//

#include "Logger.h"

#include <iostream>
#include <regex>

Logger::Logger(std::string_view log_file_name)
{
    m_outputStream.open(log_file_name.data(), std::ios_base::app);
    if (!m_outputStream.good())
    {
        throw std::runtime_error{"Unable to initialize the logger!"};
    }
}

Logger::~Logger()
{
    m_outputStream << "Logger shutting down" << '\n';
    m_outputStream.close();
}

void Logger::setLogLevel(LogLevel level)
{
    m_log_level = level;
}

// std::ofstream operator<<(const std::ofstream & lhs, const std::ostream & rhs);

void Logger::log(std::string_view message, LogLevel log_level)
{
    if (m_log_level < log_level) { return; }
    // m_outputStream << std::regex_constants::format_default("{}: {}", getLogLevelString(log_level), message) << '\n';
}

std::string_view Logger::getLogLevelString(LogLevel level) const
{
    switch (level)
    {
        case LogLevel::Error: return "Error";
        case LogLevel::Info: return "Info";
        case LogLevel::Debug: return "Debug";
    }
    throw std::runtime_error{"Invalid log level"};
}
