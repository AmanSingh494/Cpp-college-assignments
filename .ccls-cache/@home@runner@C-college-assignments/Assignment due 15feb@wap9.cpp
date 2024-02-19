// Print the ASCII code of all the numbers in a given range
#include <iostream>
#include <string>
using namespace std;
string toBinary(int n)
{
    if (n == 0)
    {
        return "";
    }
    return toBinary(n / 2) + to_string(n % 2);
}
void ascii(int n1, int n2)
{
    for (int i = n1; i <= n2; i++)
    {
        string str = to_string(i);
        string binary = "";
        for (auto it = str.begin(); it != str.end(); it++)
        {
            char digit = *it;
            int num = static_cast<int>(digit - '0');
            binary += toBinary(num+48) + " ";
        }
        cout << i << " = " << binary << endl;
        ;
    }
}
int main()
{
    int n1, n2 = 0;
    cout << "Enter the range of the numbers " << endl;
    cin >> n1 >> n2;
    ascii(n1, n2);

    return 0;
}
