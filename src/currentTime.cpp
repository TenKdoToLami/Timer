#include "currentTime.h"

void CurrentTime::getCurrentTime()
{
    auto Now = std::chrono::system_clock::now();
    std::time_t CurrentTime = std::chrono::system_clock::to_time_t(Now);

    std::cout << std::ctime(&CurrentTime);
};
