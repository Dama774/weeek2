#include <iostream>
#include <string>
#include "badminton.h"

int main() {
    std::string day, temperature, precipitation, wind, humidity;

    // Запрашиваем день недели
    std::cout << "Введите день недели: ";
    std::cin >> day;

    // Запрашиваем условия погоды
    std::cout << "Введите температуру (жарко/тепло/холодно): ";
    std::cin >> temperature;

    std::cout << "Введите осадки (ясно/облачно/дождь/снег/град): ";
    std::cin >> precipitation;

    std::cout << "Есть ли ветер? (да/нет): ";
    std::cin >> wind;

    std::cout << "Введите влажность (высокая/низкая): ";
    std::cin >> humidity;

    // Проверяем условия для игры в бадминтон
    if (canPlayBadminton(day, temperature, precipitation, wind, humidity)) {
        std::cout << "Да" << std::endl;  // Можно играть
    } else {
        std::cout << "Нет" << std::endl;  // Нельзя играть
    }

    return 0;
}

