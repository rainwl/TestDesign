#include <iostream>

#include "Foo.h"
#include "Logger.h"

int main()
{
    Logger concreteLogger{"log.out"};
    concreteLogger.setLogLevel(ILogger::LogLevel::Debug);

    Foo f{concreteLogger};
    f.DoSomething();
    return 0;
}
