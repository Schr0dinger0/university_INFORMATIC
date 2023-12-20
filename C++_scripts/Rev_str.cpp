#include <iostream>
#include <string>
std::string reverseString(const std::string& input) {
    if (input.empty()) {
        return input; 
    }
    return input.back() + input.substr(0, input.length() - 1);
}

int main() {
    std::string inputString;
    std::cout << "Введите строку для отражения: ";
    std::getline(std::cin, inputString);
    std::string reversedString = reverseString(inputString);
    std::cout << "Отраженная строка: " << reversedString << std::endl;

    return 0;
}
