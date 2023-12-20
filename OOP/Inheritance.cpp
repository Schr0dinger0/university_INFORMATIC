#include <iostream>

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() const override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Circle circle(3);

    std::cout << "Площадь прямоугольника: " << rectangle.calculateArea() << std::endl;
    std::cout << "Площадь круга: " << circle.calculateArea() << std::endl;

    return 0;
}
