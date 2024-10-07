#include <iostream>
#include "median.h"

int main() {
    int n;

    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Количество элементов должно быть положительным!" << std::endl;
        return 1;
    }

    double* data_array = new double[n]; // Создаем массив

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> data_array[i];
    }

    double median = findMedian(data_array, n); // Находим медиану

    std::cout << "Медиана: " << median << std::endl;

    // Освобождаем память
    delete[] data_array;

    return 0;
}

