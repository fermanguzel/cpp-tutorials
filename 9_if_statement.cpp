#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age:";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }else if (age < 0)
    {
        std::cout << "You are not born yet!";
    }else
    {
        std::cout << "You are not old enough to enter site!";
    }

    return 0;
}
