#include "days_in_month.h"
#include "leap_year.h"

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: // Январь
        case 3: // Март
        case 5: // Май
        case 7: // Июль
        case 8: // Август
        case 10: // Октябрь
        case 12: // Декабрь
            return 31;
        case 4: // Апрель
        case 6: // Июнь
        case 9: // Сентябрь
        case 11: // Ноябрь
            return 30;
        case 2: // Февраль
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Это не должно произойти из-за проверки выше
    }
}

