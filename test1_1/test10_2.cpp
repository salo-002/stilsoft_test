#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string name;
    int grade;
};

bool compareStudents(const Student& a, const Student& b) {
    return a.grade > b.grade; Сравниваем по убыванию
}

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::vector<Student> students(numStudents);

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter name of student " << (i + 1) << ": ";
        std::cin >> students[i].name;
        std::cout << "Enter grade of student " << (i + 1) << ": ";
        std::cin >> students[i].grade;
    }

    // Сортируем студентов по оценкам
    std::sort(students.begin(), students.end(), compareStudents);

   Выводим отсортированный список
    for (const auto& student : students) {
        std::cout << student.name << " got a grade of " << student.grade << std::endl;
    }

    return 0;
}
