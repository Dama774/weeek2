#include <iostream>
#include <cmath>
#include "sieve.h"

void sieveOfEratosthenes(int n) {
    if (n < 2) {
        std::cout << "Нет простых чисел в данном диапазоне." << std::endl;
        return;
    }

    std::cout << "Простые числа до " << n << ":\n";

    // Проверяем каждое число от 2 до n
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;

        // Проверяем делимость i на все числа от 2 до sqrt(i)
        for (int j = 2; j <= std::sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break; // Если нашли делитель, выходим из цикла
            }
        }

        // Если число простое, выводим его
        if (isPrime) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

