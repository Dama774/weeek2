#include "square_root.h"
#include <iostream>
#include <cmath> // Для std::abs

double squareRoot(double number) {
    if (number < 0) {
        std::cerr << "Ошибка: квадратный корень из отрицательного числа не существует." << std::endl;
        return -1;
    }

    double guess = number; // Начальное предположение
    double nextGuess;

    // Итерационная формула Герона
    while (true) {
        nextGuess = (guess + number / guess) / 2; // Формула Герона

        // Проверяем, насколько близки два предположения
        if (std::abs(nextGuess - guess) < 0.00001) {
            break; // Если разница меньше epsilon, выходим из цикла
        }
        
        guess = nextGuess; // Обновляем предположение
    }

    return nextGuess;
}

