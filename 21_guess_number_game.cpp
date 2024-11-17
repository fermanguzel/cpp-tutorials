#include <iostream>

int main()
{
    int number = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    number = (rand() % 100) + 1;

    std::cout << "*****Number Guessing Game*****\n";

    do
    {
        std::cout << "Enter a number between 1 - 100:";
        std::cin >> guess;
        tries++;

        if (guess > number)
        {
            std::cout << "Too High Try Again!\n";
        }
        else if (guess < number)
        {
            std::cout << "Too Low Try Again!\n";
        }
        else
        {
            std::cout << "CORRECT! # of tries:" << tries << '\n';
        }

    } while (guess != number);

    std::cout << "******************************";

    return 0;
}
