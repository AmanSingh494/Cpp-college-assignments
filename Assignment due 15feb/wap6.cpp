// 6. WAP to print a triangle of stars as follows (take the number of lines from the user):
#include <bits/stdc++.h>
using namespace std;
void ptrn1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int a = 1; a <= n - i - 1; a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 2 * i + 1; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrn2(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int b = 1; b <= i; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrn3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= n - i; a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= i; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrn4(int n)
{
    int x = ceil(n / 2.0);
    int y = floor(n / 2.0);
    // upper triangle
    for (int i = 0; i < x; i++)
    {
        for (int a = 1; a <= x - i - 1; a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 2 * i + 1; b++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower triangle i = 2,1,0
    for (int i = y - 1; i >= 0; i--)
    {
        // spaces if n = 5 y=2 i =1 spaces = 1,2
        //  i = 1,b=1 true
        // i =0 ,b =1 true
        // i = 0 ,b =0
        for (int b = 1; b >= i; b--)
        {
            cout << " ";
        }
        for (int a = 1; a <= 2 * i + 1; a++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void ptrn5(int n)
{
    /*
    1
   121
  12321
 1234321
123454321
    */
    // int x = ceil(n / 2.0);
    // int y = floor(n / 2.0);
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int a = 1; a <= n - i - 1; a++)
        {
            cout << " ";
        }
        for (int b = 1; b <= 2 * i + 1; b++)
        {
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    ptrn5(n);
    return 0;
}