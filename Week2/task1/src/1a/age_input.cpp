#include <iostream>
#include "age_input.h"

int getAge() {
    int age;
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    return age;
}

