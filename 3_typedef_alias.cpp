#include <iostream>

typedef std::string text_t;
typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t name = "ferman";
    number_t age = 34;

    std::cout << name << '\n';
    std::cout << age;

    return 0;
}