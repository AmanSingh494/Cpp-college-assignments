#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// #include <string>

// dynamic memeory allocation in c++
void dynamicMemoryAllocation(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; ++i)
    {
        array[i] = i * 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << ' ';
    }
    delete[] array;
}
int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;
    dynamicMemoryAllocation(n);
    return 0;
}