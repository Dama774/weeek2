#include <iostream>
#include "merge_sort.h"
#include "output.h"

int main() {
    int n;

    std::cout << "Введите количество элементов: ";
    std::cin >> n;

    double* data_array = new double[n]; // Создаем массив

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> data_array[i];
    }

    std::cout << "Исходный массив: ";
    printArray(data_array, n);

    mergeSort(data_array, 0, n - 1);

    std::cout << "Отсортированный массив: ";
    printArray(data_array, n);

    // Освобождаем память
    delete[] data_array;

    return 0;
}

