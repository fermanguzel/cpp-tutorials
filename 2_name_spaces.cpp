#include <iostream>

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second


int main(){

    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    return 0;
}