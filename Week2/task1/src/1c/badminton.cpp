#include "badminton.h"

bool canPlayBadminton(const std::string& day, const std::string& temperature, 
                      const std::string& precipitation, const std::string& wind, 
                      const std::string& humidity) {
    bool isSunday = (day == "воскресенье");
    bool isGoodWeather = (temperature == "жарко" || temperature == "тепло") &&
                         (precipitation == "ясно" || precipitation == "облачно") &&
                         (wind == "нет") &&
                         (humidity == "низкая");

    return isSunday && isGoodWeather;
}

