#include <iostream>

int main() {
    double length, width;
    std::cout << "Введите длину прямоугольника: ";
    std::cin >> length;
    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;
    double area = length * width;
    std::cout << "Площадь прямоугольника: " << area << std::endl;

    return 0;
}
