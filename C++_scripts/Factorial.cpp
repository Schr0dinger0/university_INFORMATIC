#include <iostream>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    std::cout << "Введите число для вычисления факториала: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Факториал определен только для неотрицательных чисел." << std::endl;
        return 1;
    }

    std::cout << "Факториал " << number << " = " << factorial(number) << std::endl;

    return 0;
}
