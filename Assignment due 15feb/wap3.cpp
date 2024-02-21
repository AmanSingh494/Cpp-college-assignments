/*3. WAP to compute the sum of the first n terms of the following series

S = 1 + 1/2! + 1/3! + 1/4! +……*/
#include <iostream>
using namespace std;
int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
float sum(int n)
{
  float total = 0;
  for (int i = 1; i <= n; i++)
  {
    total = total + 1.0 / factorial(i);
  }
  return total;
}
int main()
{
  int n;
  cout << "Enter the number of terms" << endl;
  cin >> n;
  float sumOfNum = sum(n);
  cout << sumOfNum;
}