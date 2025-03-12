#include <iostream>
using namespace std;

int main() {
    int first_number, second_number;

    // Запрос первого целого числа
    cout << "Enter an integer: ";
    cin >> first_number;

    // Запрос второго целого числа
    cout << "Enter another integer: ";
    cin >> second_number;

    // Вычисление суммы и разности
    int sum_result = first_number + second_number;
    int difference_result = first_number - second_number;

    // Вывод результатов
    cout << first_number << " + " << second_number << " is " << sum_result << "." << endl;
    cout << first_number << " - " << second_number << " is " << difference_result << "." << endl;

    return 0;
}
