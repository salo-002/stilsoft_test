#include <iostream>

namespace Constants
{
    inline constexpr double pi { 3.14159 };
}

using Degrees = double; Псевдоним для типа double, представляющего градусы
using Radians = double; Псевдоним для типа double, представляющего радианы

Radians convertToRadians(Degrees degrees)
{
    return degrees * Constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
