#include <iostream>
#include "sieve.h"

int main() {
    int n;

    // Запрашиваем у пользователя верхнюю границу
    std::cout << "Введите верхнюю границу для поиска простых чисел: ";
    std::cin >> n;

    sieveOfEratosthenes(n);

    return 0;
}

