#include <iostream>
#include "pyramid.h"

void printPyramid(int height) {
    for (int i = 0; i < height; ++i) {
        // Вывод пробелов для выравнивания
        for (int j = 0; j < height - i - 1; ++j) {
            std::cout << " ";
        }

        // Вывод символов '#' для левой части пирамиды
        for (int j = 0; j <= i; ++j) {
            std::cout << "#";
        }

        // Разделитель с пробелом
        std::cout << " ";

        // Вывод символов '#' для правой части пирамиды
        for (int j = 0; j <= i; ++j) {
            std::cout << "#";
        }

        // Переход на новую строку
        std::cout << std::endl;
    }
}

