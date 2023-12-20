#include <iostream>
#include <string>

int countVowels(const std::string& input) {
    const std::string vowels = "aeiouAEIOUаеёиоуыэюяАЕЁИОУЫЭЮЯ";
    int vowelCount = 0;
    for (char c : input) {
        if (vowels.find(c) != std::string::npos) {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    std::string inputString;
    std::cout << "Введите строку для подсчета гласных: ";
    std::getline(std::cin, inputString);
    int vowelCount = countVowels(inputString);
    std::cout << "Количество гласных в строке: " << vowelCount << std::endl;

    return 0;
}
