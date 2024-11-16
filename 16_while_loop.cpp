#include <iostream>

int main()
{
    std::string name;
    int number;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "Hello " << name << "\n";
    std::cout << "The number is: " << number << "\n";
    return 0;
}
