#include <iostream>

int main() {

    //int (whole number)
    int age = 34;
    int year = 2023;
    int days = 7;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //char (single character)
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    const double PI = 3.14;
    double result = 10 * PI;

    //string (objects that represent a sequence of text)
    std::string name = "Ferman";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    
    std::cout << "Result: " << result;
    return 0;
}