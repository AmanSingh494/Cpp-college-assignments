// 16. Write a program that swaps two numbers using pointers.
#include <iostream>
using namespace std;
void swap(int &n1, int &n2)
{
    int temp = n1;
    int* addr1 = &n1;
    int* addr2 = &n2;
    n1 = *addr2;
    n2 = temp;
    cout << n1 << " " << n2;
}
int main()
{
    int n1, n2 = 0;
    cout << "Enter the two numbers " << endl;
    cin >> n1 >> n2;
    swap(n1, n2);

    return 0;
}