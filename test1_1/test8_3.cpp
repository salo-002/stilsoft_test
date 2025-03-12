#include <iostream>

Шаблон функции mult
template <typename T>
T mult(T a, int b)
{
    return a * b;
}

int main()
{
    std::cout << mult(2, 3) << '\n';        Выводит 6
    std::cout << mult(1.2, 3) << '\n';      Выводит 3.6

    return 0;
}
