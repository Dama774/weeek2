#include <iostream>
#include "input.h"
#include "processing.h"
#include "output.h"

int main() {
    int n = getInputSize();
    if (n < 1) return 1; // Обработка ошибки

    double* data_array = getInputData(n);

    double max_value;
    int count;
    findMaxAndCount(data_array, n, max_value, count);

    printResults(max_value, count);

    // Освобождение памяти
    delete[] data_array;

    return 0;
}

