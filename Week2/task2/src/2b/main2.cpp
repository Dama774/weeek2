#include <iostream>
#include <iomanip> // Для std::setprecision
#include "square_root.h"

int main() {
    double number;

    // Запрашиваем число у пользователя
    std::cout << "Введите число для нахождения квадратного корня: ";
    std::cin >> number;

    double result = squareRoot(number);
    
    if (result != -1) {
        std::cout << "Квадратный корень из " << number << " равен: " << std::setprecision(5) << result << std::endl;
    }

    return 0;
}

