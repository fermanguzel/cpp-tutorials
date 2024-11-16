#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "*****Temperature Convertor*****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to (F or C): ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in Celsius:\n";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is " << temp << " °F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in Fahrenheit:\n";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is " << temp << " °C\n";
    }
    else
    {
        std::cout << "Please enter in only F or C\n";
    }

    std::cout << "*******************************\n";

    return 0;
}
