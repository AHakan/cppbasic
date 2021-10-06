#include <iostream>
#include <chrono>
#include <time.h>
#include <cstring>

int main(int argc, const char** argv)
{
    const auto p1 = std::chrono::system_clock::now();

    // Get milliseconds
    uint16_t milliseconds = (std::chrono::duration_cast<std::chrono::milliseconds>(
                   p1.time_since_epoch()).count())%1000;

    time_t     now = std::chrono::duration_cast<std::chrono::seconds>(p1.time_since_epoch()).count();
    char       buf[30];
    struct tm  tstruct = *localtime(&now);

    strftime(buf, sizeof(buf), "%Y.%m.%d-%X", &tstruct);

    snprintf(buf + strlen(buf), sizeof buf - strlen(buf), ".%d", milliseconds);

    std::cout << buf << std::endl;

    return 0;
}