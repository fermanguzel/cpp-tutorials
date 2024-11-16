#include <iostream>

int main()
{
    int grade = 50;
    bool hungry = true;
    int number = 9;

    grade >= 50 ? std::cout << "You pass!\n" : std::cout << "You Fail\n";
    hungry ? std::cout << "You hungry!\n" : std::cout << "You aren't hungry!\n";
    number % 2 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    return 0;
}
