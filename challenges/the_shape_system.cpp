#include <iostream>

class Shape
{

    // as soon as class has one pure virtual function:
    //              Any child MUST override that function
    //              It becomes abstract
public:
    virtual double getArea() = 0;

    // THE SAFETY NET
    // This ensures that when you 'delete shapePtr', 
    // it calls ~Circle() or ~Rectangle() first!
    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    double radius;

    Circle(double radius)
    {
        this->radius = radius;
    }

    double getArea() override
    {
        return 3.14 * radius * radius;
    }
};

class Rectange : public Shape
{
public:
    double width;
    double height;

    Rectange(double length, double height)
    {
        this->width = length;
        this->height = height;
    }
    
    double getArea() override
    {
        return width * height;
    }    
};

int main()
{
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectange(4, 6);

    std::cout << "Circle Area: " << s1->getArea() << "\n";
    std::cout << "Rectangle Area: " << s2->getArea() << "\n";

    delete s1;
    delete s2;

    return 0;
}