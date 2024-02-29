//
// Created by 22153 on 2/29/2024.
//

#ifndef FOO_H
#define FOO_H
#include "ILogger.h"


class Foo
{
public:
    explicit Foo(ILogger &logger): m_logger{logger}
    {
    }

    void DoSomething()
    {
        m_logger.log("Hello dependency injection!", ILogger::LogLevel::Info);
    }

private:
    ILogger &m_logger;
};


#endif //FOO_H
