#include <iostream>

int main()
{
    int temp;
    bool sunny = true;

    std::cout << "Enter Temperature: ";
    std::cin >> temp;

    temp > 0 && temp < 30 ? std::cout << "Weather is GOOD outside!\n" : std::cout << "Weather is BAD outside!\n";
    !sunny ? std::cout << "It's CLOUDY outside!\n" : std::cout << "It's SUNNY outside!\n";
    return 0;
}
