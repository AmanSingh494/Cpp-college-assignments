#include <bits/stdc++.h>
using namespace std;
class Shapes
{
    string name = "";

public:
    float pi = 3.141;
    Shapes(string x)
    {
        name = x;
    }
    void displayArea()
    {
        cout << "Area of " << name << " is ";
    }
};
// twodim
class TwoDim : public Shapes
{
    int length = 0;

public:
    TwoDim(string name, int len) : Shapes(name)
    {
        length = len;
    }
};
class Triangle : public TwoDim
{
    int base = 0;

public:
    Triangle(string name, int len, int b) : TwoDim(name, len)
    {
        base = b;
    }
};
class Rectangle : public TwoDim
{
    int width = 0;

public:
    Rectangle(string name, int len, int w) : TwoDim(name, len)
    {
        width = w;
    }
};
class Circle : public TwoDim
{

public:
    Circle(string name, int len) : TwoDim(name, len)
    {
    }
    void area()
    {
        Shapes::displayArea();
        cout << Shapes::pi;
    }
};

// threedim
class ThreeDim : public Shapes
{

public:
};
class Cone : public ThreeDim
{

public:
};
class Cube : public ThreeDim
{

public:
};
class Sphere : public ThreeDim
{

public:
};
int main()
{
    return 0;
}