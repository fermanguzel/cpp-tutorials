#include <iostream>

bool isAdult(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string concatString(std::string name, std::string surname)
{
    return name + " " + surname;
}

void happyBirthday(std::string fullName, int age)
{
    std::cout << "Happy Birthday to " << fullName << '\n';
    std::cout << "You are " << age << " years old" << '\n';
}

int main()
{
    // function = a block of reusable code

    std::string name, surname, fullName;
    int age = 0;

    std::cout << "Enter your name:";
    std::cin >> name;
    std::cout << "Enter your surname:";
    std::cin >> surname;
    std::cout << "Enter your age:";
    std::cin >> age;

    fullName = concatString(name, surname);

    happyBirthday(fullName, age);

    if (isAdult(age))
    {
        std::cout << "You are an adult!" << std::endl;
    }
    else
    {
        std::cout << "You are a child" << std::endl;
    }

    return 0;
}
