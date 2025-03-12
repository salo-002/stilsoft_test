#include <iostream>

Шаблон функции add
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << add(2, 3) << '\n';        Выводит 5
    std::cout << add(1.2, 3.4) << '\n';    Выводит 4.6

    return 0;
}
