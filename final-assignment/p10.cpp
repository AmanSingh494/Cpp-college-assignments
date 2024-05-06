#include <bits/stdc++.h>
using namespace std;

class Triangle
{
    int side1 = 0, side2 = 0, side3 = 0;

public:
    Triangle(int x, int y, int z)
    {
        try
        {
            // validating
            zeroSides(x, y, z);
            greaterSum(x, y, z);
            side1 = x;
            side2 = y;
            side3 = z;
        }
        catch (const string str)
        {
            cout << str << endl;
        }
    }
    void zeroSides(int x, int y, int z)
    {
        if (x == 0 || y == 0 || z == 0)
        {
            throw string("Length of sides should be more than 0");
        }
    }
    void greaterSum(int x, int y, int z)
    {
        if (x + y <= z || y + z <= x || x + z <= y)
        {
            throw string("Sum of two sides should be greater than the third side");
        }
    }

    void area()
    {
        // area using heron's formula
        float avg = (side1 + side2 + side3) / 2.0;
        float areaOfTri = sqrt(avg * (avg - side1) * (avg - side2) * (avg - side3));
        cout << "I(Heron's formula) work with everyone" << endl;
        cout << "area of triangle is " << areaOfTri << endl;
    }
    void area(int height, int base)
    {
        // area of a right angled triangle
        int areaOfTri = 0.5 * height * base;
        cout << "Right angled triangle, got you" << endl;
        cout << "area of triangle is " << areaOfTri << endl;
    }
};

int main()
{
    // int side1, side2, side3;
    // cout << "Enter the size of sides of the triangle" << endl;
    // cin >> side1 >> side2 >> side3;
    Triangle trio(10, 1, 11);
    trio.area(10, 12);
    Triangle newTrio(10, 20, 11);
    newTrio.area();
    return 0;
}