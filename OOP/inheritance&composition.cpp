#include <iostream>
#include <string>

class House {
public:
    int numberOfRooms;
    std::string address;

    House(int rooms, const std::string& addr) : numberOfRooms(rooms), address(addr) {}
};

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

class Resident : public Person {
public:
    House* residence;

    Resident(const std::string& n, int a, House* house) : Person(n, a), residence(house) {}

    void displayInfo() {
        std::cout << "Имя: " << name << ", Возраст: " << age << ", Адрес: " << residence->address << std::endl;
    }
};

int main() {
    House house(3, "123 Main St");
    Resident resident("John", 25, &house);

    resident.displayInfo();

    return 0;
}
