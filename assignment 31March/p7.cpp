#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Vector
{
    vector<T> vec;

public:
    Vector(vector<T> arr)
    {
        vec = arr;
    }
    void display()
    {
        for (auto it : vec)
            cout << it << ' ';
        cout << endl;
    }
    vector<T> getVector()
    {
        return vec;
    }
    Vector add(Vector other)
    {
        vector<T> temp;
        int i = 0;
        vector<T> otherVec = other.getVector();
        int mySize = vec.size();
        int otherSize = 0;
        for (auto it : otherVec)
            otherSize++;
        while (i < mySize && i < otherSize)
        {
            T sum = vec[i] + otherVec[i];
            temp.push_back(sum);
            i++;
        }
        while (i < mySize)
        {
            temp.push_back(vec[i]);
            i++;
        }
        while (i < otherSize)
        {
            temp.push_back(otherVec[i]);
            i++;
        }
        return temp;
    }
};
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2 = {10,1,11,12,31,1324,535,21,56,9,8,65,34};
    vector<double> arr3 = {1.1, 2.2, 3.3, 4.3,5.5,6.6,7.7,8.8,9.9};
    vector<double> arr4 = {1.1, 2.2, 3.3, 4.3};

    Vector<int> myVec1(arr1);
    Vector<int> myVec2(arr2);
    Vector<double> myVec3(arr3);
    Vector<double> myVec4(arr4);

    Vector<int> newVec = myVec1.add(myVec2);
    newVec.display();
    
    Vector<double> newVec2 = myVec3.add(myVec4);
    newVec2.display();
    return 0;
}