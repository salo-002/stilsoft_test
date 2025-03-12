#include <iostream>

int callCount = 0; Счетчик вызовов функции

bool passOrFail() {
   Увеличиваем счетчик при каждом вызове
    if (callCount < 3) {
        callCount++;
        return true; Возвращаем true для первых 3 вызовов
    }
    return false; Возвращаем false для последующих вызовов
}

int main() {
    std::cout << "User #1: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #2: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #3: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #4: " << (passOrFail() ? "Pass" : "Fail") << '\n';
    std::cout << "User #5: " << (passOrFail() ? "Pass" : "Fail") << '\n';

    return 0;
}
