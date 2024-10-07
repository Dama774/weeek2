#include <iostream>
#include "input.h"

int getInputSize() {
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;

    // Проверка на допустимый размер массива
    if (n < 1) {
        std::cout << "Некорректное количество чисел!" << std::endl;
        return -1; // Возвращаем -1 для обозначения ошибки
    }
    return n;
}

double* getInputData(int n) {
    double* data_array = new double[n];
    std::cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> data_array[i];
    }
    return data_array;
}

