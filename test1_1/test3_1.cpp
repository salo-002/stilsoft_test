#include <iostream>

int readNumber() 
{
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x; Возвращаем считанное значение
}

void writeAnswer(int x) 
{
    std::cout << "The sum is: " << x << std::endl; Добавлен пробел после двоеточия
}

int main() 
{
    int x {};
    x = readNumber();  Считываем число в x
    x = x + readNumber(); Считаем сумму с новым значением
    writeAnswer(x); Печатаем результат

    return 0;
}
