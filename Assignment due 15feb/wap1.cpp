// /*WAP to compute the sum of the first n terms of the following series
// S = 1+1/2+1/3+1/4+…*/
/*#include <bits/stdc//++.h>*/
#include <iostream>
using namespace std;
float sum(int n)
{
    float S;
    for (int i = 1; i <= n; i++)
    {
        S += 1.0 / i;
    }
    return S;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    float sumOfNum = sum(n);
    cout << sumOfNum;
}