#include <iostream>
#include <cmath>
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    std::cout << "Введите число для проверки на простоту: ";
    std::cin >> number;
    if (isPrime(number)) {
        std::cout << number << " - простое число." << std::endl;
    } else {
        std::cout << number << " - не простое число." << std::endl;
    }

    return 0;
}
