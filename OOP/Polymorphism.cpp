#include <iostream>
#include <vector>

class Fruit {
public:
    virtual void getVitamins() const = 0;
};

class Apple : public Fruit {
public:
    void getVitamins() const override {
        std::cout << "Яблоки содержат витамины A и C." << std::endl;
    }
};

class Orange : public Fruit {
public:
    void getVitamins() const override {
        std::cout << "Апельсины содержат витамин C." << std::endl;
    }
};

int main() {
    std::vector<Fruit*> fruits;

    Apple apple;
    Orange orange;

    fruits.push_back(&apple);
    fruits.push_back(&orange);

    for (const auto& fruit : fruits) {
        fruit->getVitamins();
    }

    return 0;
}
