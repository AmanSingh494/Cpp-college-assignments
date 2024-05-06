#include <bits/stdc++.h>
using namespace std;

template <typename T>
T findpos(vector<T> arr, int size, T element)
{
    int pos = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            pos = i;
            break;
        }
    }
   cout << pos << endl;
};

int main()
{
    vector<int> intArr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<double> doubleArr = {1.1, 2.1, 3.1, 4.1, 5.1, 6.2};
    vector<string> stringArr = {"abc", "bcd", "cde", "efg"};
    findpos<int>(intArr, intArr.size(), 7);
    findpos<double>(doubleArr, doubleArr.size(), 5.1);
    findpos<string>(stringArr, stringArr.size(), "afg");
    return 0;
}