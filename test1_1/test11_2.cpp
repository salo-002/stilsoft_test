#include <iostream>
#include <iterator>

int binarySearch(const int *array, int target, int min, int max)
{
    while (min <= max) 
    {
        int mid = min + (max - min) / 2; Находим центральный элемент

        if (array[mid] == target) 
        {
            return mid; Если целевой элемент найден, возвращаем его индекс
        }
        else if (array[mid] > target) 
        {
            max = mid - 1; Отбрасываем верхнюю половину
        } 
        else 
        {
            min = mid + 1; Отбрасываем нижнюю половину
        }
    }
    return -1; Если элемент не найден, возвращаем -1
}

int main()
{
    constexpr int array[]{ 3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48 };

    constexpr int numTestValues{ 9 };
    constexpr int testValues[numTestValues]{ 0, 3, 12, 13, 22, 26, 43, 44, 49 };
    int expectedValues[numTestValues]{ -1, 0, 3, -1, -1, 8, -1, 13, -1 };

    for (int count{ 0 }; count < numTestValues; ++count)
    {
        int index{ binarySearch(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1) };
        if (index == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed!\n";
        else
            std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";
    }

    return 0;
}
