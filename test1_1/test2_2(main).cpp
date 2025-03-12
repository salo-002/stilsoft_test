
#include <iostream>
using namespace std;

Предварительное объявление функций
void readNumber(int& num);
void writeAnswer(int sum, int difference);

int main() {
    int first_number, second_number;

    Чтение чисел
    readNumber(first_number);
    readNumber(second_number);

    Вычисление суммы и разности
    int sum_result = first_number + second_number;
    int difference_result = first_number - second_number;

    Запись результатов
    writeAnswer(sum_result, difference_result);

    return 0;
}






