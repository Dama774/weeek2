#include <iostream>
#include "leap_year.h"
#include "days_in_month.h"

int main() {
    int month;
    int year = 2024; // Пример високосного года

    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;

    // Проверка на корректность ввода
    if (month < 1 || month > 12) {
        std::cout << "Некорректный номер месяца. Пожалуйста, введите число от 1 до 12." << std::endl;
        return 1;
    }

    int days = getDaysInMonth(month, year); // Получаем количество дней в месяце

    // Вывод результата
    std::cout << "Количество дней в месяце " << month << ": " << days << std::endl;

    return 0;
}

