#include "age_suffix.h"

std::string getAgeSuffix(int age) {
    if (age % 10 == 1 && age % 100 != 11) {
        return "год";
    } else if ((age % 10 >= 2 && age % 10 <= 4) && (age % 100 < 12 || age % 100 > 14)) {
        return "года";
    } else {
        return "лет";
    }
}

