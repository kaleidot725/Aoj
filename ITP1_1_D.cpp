#include <iostream>

int IPT1_1_D() {
    int totalSeconds;
    std::cin >> totalSeconds;

    int hour = totalSeconds / 60 / 60;
    int hourSecond = hour * 60 * 60;
    int minute = (totalSeconds - hourSecond) / 60;
    int minuteSecond = minute * 60;
    int second = (totalSeconds - hourSecond - minuteSecond);

    std::cout << hour << ":" << minute << ":" << second << std::endl;
    return 0;
}
