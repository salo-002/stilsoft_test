#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    Проверяем, не ушли ли мы под землю
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    int time = 0; Переменная времени

    Цикл для вычисления высоты до достижения земли
    while (true)
    {
        double height = calculateHeight(initialHeight, time);
        calculateAndPrintHeight(initialHeight, time);

       Проверяем, достигли ли мы земли
        if (height == 0.0)
            break;

        time++; Увеличиваем время
    }

    return 0;
}
