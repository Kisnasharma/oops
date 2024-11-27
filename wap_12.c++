#include <iostream>

using namespace std;

// Base Shape class
class Shape {
public:
    virtual void display() const = 0;  // Pure virtual function
    virtual ~Shape() = default;
};

// 2D Shape base class
class Shape2D : public Shape {
    // Placeholder for 2D shapes
};

// 3D Shape base class
class Shape3D : public Shape {
    // Placeholder for 3D shapes
};

// Ellipse class (inherits from Shape2D)
class Ellipse : public Shape2D {
protected:
    double majorAxis;
    double minorAxis;
public:
    Ellipse(double major, double minor) {
        this->majorAxis = major;
        this->minorAxis = minor;
    }
    
    void display() const override {
        cout << "Ellipse with major axis: " << majorAxis << " and minor axis: " << minorAxis << endl;
    }
};

// Circle class (inherits from Ellipse)
class Circle : public Ellipse {
public:
    Circle(double radius) : Ellipse(radius, radius) {
        this->majorAxis = radius;
        this->minorAxis = radius;
    }
    
    void display() const override {
        cout << "Circle with radius: " << majorAxis << endl;
    }
};

// Rectangle class (inherits from Shape2D)
class Rectangle : public Shape2D {
protected:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        this->length = l;
        this->width = w;
    }
    
    void display() const override {
        cout << "Rectangle with length: " << length << " and width: " << width << endl;
    }
};

// Square class (inherits from Rectangle)
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {
        this->length = side;
        this->width = side;
    }
    
    void display() const override {
        cout << "Square with side length: " << length << endl;
    }
};

// Sphere class (inherits from Shape3D)
class Sphere : public Shape3D {
    double radius;
public:
    Sphere(double r) {
        this->radius = r;
    }
    
    void display() const override {
        cout << "Sphere with radius: " << radius << endl;
    }
};

// Cuboid class (inherits from Shape3D)
class Cuboid : public Shape3D {
protected:
    double length;
    double width;
    double height;
public:
    Cuboid(double l, double w, double h) {
        this->length = l;
        this->width = w;
        this->height = h;
    }
    
    void display() const override {
        cout << "Cuboid with length: " << length << ", width: " << width << ", and height: " << height << endl;
    }
};

// Cube class (inherits from Cuboid)
class Cube : public Cuboid {
public:
    Cube(double side) : Cuboid(side, side, side) {
        this->length = side;
        this->width = side;
        this->height = side;
    }
    
    void display() const override {
        cout << "Cube with side length: " << length << endl;
    }
};

int main() {
    // 2D Shapes
    Circle circle(5);
    Square square(4);
    Rectangle rectangle(3, 7);
    
    // 3D Shapes
    Sphere sphere(5);
    Cube cube(4);
    Cuboid cuboid(3, 4, 5);
    
    // Display information
    circle.display();
    square.display();
    rectangle.display();
    sphere.display();
    cube.display();
    cuboid.display();
    
    return 0;
}
