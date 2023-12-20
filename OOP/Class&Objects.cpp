#include <iostream>
#include <string>

class Dog {
public:
    std::string name;
    int age;

    void displayInfo() {
        std::cout << "Собака: Имя - " << name << ", Возраст - " << age << " лет." << std::endl;
    }
};

int main() {
    Dog dog1;
    dog1.name = "Барон";
    dog1.age = 3;

    Dog dog2;
    dog2.name = "Рекс";
    dog2.age = 5;

    dog1.displayInfo();
    dog2.displayInfo();

    return 0;
}
