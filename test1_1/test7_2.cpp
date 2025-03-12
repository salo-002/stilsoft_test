#include <iostream>
#include <cassert>

bool isPrime(int x)
{
    if (x <= 1) Проверяем, что x больше 1
        return false;
    for (int i = 2; i * i <= x; ++i) Проходим от 2 до корня из x
    {
        if (x % i == 0) Если x делится на i без остатка
            return false;
    }
    return true; Если не нашли делителей, x - простое число
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!";

    return 0;
}
