#include <bits/stdc++.h>
using namespace std;
class Shapes
{
    string name = "";

public:
    const float pi = 3.141;
    Shapes(string x)
    {
        name = x;
    }
    virtual void displayArea()
    {
        cout << "Area of " << name << " is ";
    }
};
// twodim
class TwoDim : public Shapes
{
protected:
    int length = 0, width = 0;

public:
    TwoDim(string name, int len) : Shapes(name)
    {
        length = len;
    }
    TwoDim(string name, int len, int wid) : Shapes(name)
    {
        length = len;
        width = wid;
    }
};
class Triangle : public TwoDim
{

public:
    Triangle(string name, int len, int base) : TwoDim(name, len, base)
    {
    }
    void displayArea() override
    {
        Shapes::displayArea();
        cout << 0.5 * length * width << endl;
    }
};
class Rectangle : public TwoDim
{
public:
    Rectangle(string name, int len, int wid) : TwoDim(name, len, wid)
    {
    }
    void displayArea() override
    {
        Shapes::displayArea();
        cout << length * width << endl;
    }
};
class Circle : public TwoDim
{

public:
    Circle(string name, int len) : TwoDim(name, len)
    {
    }
    void displayArea() override
    {
        Shapes::displayArea();
        cout << pi * length * length << endl;
    }
};

// threedim
class ThreeDim : public Shapes
{
protected:
    int length = 0, width = 0, height = 0;

public:
    ThreeDim(string name, int len) : Shapes(name)
    {
        length = len;
    }
    ThreeDim(string name, int len, int wid) : Shapes(name)
    {
        length = len;
        width = wid;
    }
    ThreeDim(string name, int len, int wid, int hei) : Shapes(name)
    {
        length = len;
        width = wid;
        height = hei;
    }
};
class Cone : public ThreeDim
{
public:
    Cone(string name, int length, int width) : ThreeDim(name, length, width)
    {
    }
    void displayArea() override
    {
        Shapes::displayArea();
        cout << (pi * length) * (length + sqrt((length * length) + (width* width)))<<endl;
    }
};
class Cube : public ThreeDim
{
public:
    Cube(string name, int side) : ThreeDim(name, side) {}
    void displayArea() override
    {
        Shapes::displayArea();
        cout << 6 * pow(length, 2) << endl;
    }
};
class Cuboid : public ThreeDim
{
public:
    Cuboid(string name, int length, int width, int height) : ThreeDim(name, length, width, height) {}
    void displayArea() override
    {
        Shapes::displayArea();
        cout << 2 * (length * height + length * width + height * width) << endl;
    }
};
class Sphere : public ThreeDim
{
public:
    Sphere(string name, int length) : ThreeDim(name, length) {}
    void displayArea() override
    {
        Shapes::displayArea();
        cout << 4 * pi * length * length;
    }
};
int main()
{
    Triangle trio("Trio",8,20);
    Rectangle myRect("Rectu", 12, 10);
    Circle duniyaGol("DuniyaGol",10);
    Cone trikon("Trikon",15,12);
    Cube rubix("rubix",20);
    Cuboid dabba("Dabba",15,12,10);
    Sphere golu("Golu",22);
    myRect.displayArea();
    trio.displayArea();
    duniyaGol.displayArea();
    trikon.displayArea();
    rubix.displayArea();
    dabba.displayArea();
    golu.displayArea();
    return 0;
}