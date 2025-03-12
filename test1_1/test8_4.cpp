#include <iostream>

Шаблон функции sub
template <typename T1, typename T2>
auto sub(T1 a, T2 b) -> decltype(a - b)
{
    return a - b;
}

int main()
{
    std::cout << sub(3, 2) << '\n';        Выводит 1
    std::cout << sub(3.5, 2) << '\n';      Выводит 1.5
    std::cout << sub(4, 1.5) << '\n';      Выводит 2.5

    return 0;
}
