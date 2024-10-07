#include "median.h"
#include <algorithm> // Для std::sort

double findMedian(double* arr, int size) {
    std::sort(arr, arr + size); // Сортируем массив

    if (size % 2 == 0) {
        // Если количество элементов четное, медиана - среднее двух центральных элементов
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        // Если количество элементов нечетное, медиана - центральный элемент
        return arr[size / 2];
    }
}

