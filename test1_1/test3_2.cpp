#include <iostream>

int readNumber() 
{
    std::cout << "Please enter a number: ";
    int x {};
    std::cin >> x;
    return x; Возвращаем считанное значение
}

void writeAnswer(int x) 
{
    std::cout << "The quotient is: " << x << std::endl; Добавлено пробел после двоеточия
}

int main() 
{
    int x = readNumber(); Первое число
    int y = readNumber(); Второе число

    Проверка на деление на ноль
    if (y != 0) 
    {
        writeAnswer(x / y); Печатаем частное
    } 
    else 
    {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}
