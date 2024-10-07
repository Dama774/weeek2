#include "merge_sort.h"
#include <iostream>

void merge(double* arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Размер первого подмассива
    int n2 = right - mid;    // Размер второго подмассива

    // Создаем временные массивы
    double* L = new double[n1];
    double* R = new double[n2];

    // Копируем данные во временные массивы L[] и R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Слияние временных массивов обратно в arr[left..right]
    int i = 0; // Индекс первого подмассива
    int j = 0; // Индекс второго подмассива
    int k = left; // Индекс слияния

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Копируем оставшиеся элементы L[], если есть
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Копируем оставшиеся элементы R[], если есть
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Освобождаем память
    delete[] L;
    delete[] R;
}

void mergeSort(double* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Находим середину массива

        // Рекурсивно сортируем две половины
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Сливаем отсортированные половины
        merge(arr, left, mid, right);
    }
}

