#include <iostream>

int main() {
    double celsius, fahrenheit;
    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    std::cout << "Температура в градусах Фаренгейта: " << fahrenheit << std::endl;

    return 0;
}
