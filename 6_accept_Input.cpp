#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "What is your Fullname: ?";
    std::getline(std::cin >> std::ws, name);

    std::cout << "What is your Age: ?";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " ages years old";

    return 0;
}
