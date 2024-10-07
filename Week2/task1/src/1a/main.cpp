#include <iostream>
#include "age_input.h"
#include "age_suffix.h"

int main() {
    int age;

    // Запрашиваем возраст
    age = getAge();

    // Определяем правильное склонение
    std::string suffix = getAgeSuffix(age);

    // Выводим результат
    std::cout << age << " " << suffix << std::endl;

    return 0;
}

