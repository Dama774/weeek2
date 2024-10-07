#include <iostream>
#include "pyramid.h"

int main() {
    int height;

    std::cout << "Введите высоту пирамиды: ";
    std::cin >> height;

    if (height <= 0) {
        std::cout << "Высота пирамиды должна быть положительной!" << std::endl;
        return 1;
    }

    printPyramid(height); // Вызов функции для печати пирамиды

    return 0;
}

