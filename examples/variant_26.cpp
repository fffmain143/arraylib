#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int points[] = {
        1250, 980, 1430, 1110,
        1670, 1320, 890, 1540
    };
    const std::size_t n = sizeof(points) / sizeof(points[0]);

    int above_1300 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (points[i] > 1300) {
            ++above_1300;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Количество игроков: " << n << '\n';
    std::cout << "Очки:";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ' ' << points[i];
    }
    std::cout << '\n';
    std::cout << "Сумма очков: " << arr_sum(points, n) << '\n';
    std::cout << "Лучший результат: " << arr_max(points, n) << '\n';
    std::cout << "Худший результат: " << arr_min(points, n) << '\n';
    std::cout << "Средний результат: " << arr_average(points, n) << '\n';
    std::cout << "Игроков с результатом выше 1300: " << above_1300 << '\n';
    return 0;
}