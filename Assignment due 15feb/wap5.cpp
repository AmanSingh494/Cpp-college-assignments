// 5. WAP to compute the factors of a given number.
#include <bits/stdc++.h>
using namespace std;
void findFactors(int n)
{
    /*
    n =10 ,till 5
    n =11, till 6
    */
    cout << "The factors of " << n << " are :" << endl;
    cout << 1 << " ";
    for (int i = 2; i <= ceil(n / 2.0); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << n;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    findFactors(n);
}