#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int number = rand() % 5 + 1;

    switch (number)
    {
    case 1:
        std::cout << "You won an Iphone 15\n";
        break;
    case 2:
        std::cout << "You won a PS5 Pro\n";
        break;
    case 3:
        std::cout << "You won a AUDI TT\n";
        break;
    case 4:
        std::cout << "You won a MERCEDES AMG\n";
        break;
    case 5:
        std::cout << "You won a House\n";
        break;
    default:
        break;
    }

    return 0;
}
