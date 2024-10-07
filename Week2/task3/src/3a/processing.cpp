#include "processing.h"

void findMaxAndCount(double* data_array, int n, double& max_value, int& count) {
    max_value = -1e9; // Инициализация максимального значения
    count = 0; // Счетчик для хранения количества максимальных значений

    for (int i = 0; i < n; ++i) {
        if (data_array[i] > max_value) {
            max_value = data_array[i]; // Обновляем максимальное значение
            count = 1; // Сбрасываем счетчик, так как нашли новое максимальное
        } else if (data_array[i] == max_value) {
            count++; // Увеличиваем счетчик, если число равно текущему максимальному
        }
    }
}

