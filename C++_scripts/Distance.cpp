#include <iostream>

int main() {
    double meters, kilometers;
    std::cout << "Введите расстояние в метрах: ";
    std::cin >> meters;
    kilometers = meters / 1000.0;
    std::cout << "Расстояние в километрах: " << kilometers << " км" << std::endl;

    return 0;
}
