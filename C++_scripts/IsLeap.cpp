#include <iostream>
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    int year;
    std::cout << "Введите год для проверки на високосность: ";
    std::cin >> year;
    if (isLeapYear(year)) {
        std::cout << year << " - високосный год." << std::endl;
    } else {
        std::cout << year << " - не високосный год." << std::endl;
    }

    return 0;
}
