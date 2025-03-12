#include <iostream>

 Функция для обмена значениями двух целочисленных переменных
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    
    std::cout << "Введите первое целое число (x): ";
    std::cin >> x;
    std::cout << "Введите второе целое число (y): ";
    std::cin >> y;

    std::cout << "Перед обменом: x = " << x << ", y = " << y << std::endl;

   Обмен значениями x и y
    swap(x, y);

    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    return 0;
}
