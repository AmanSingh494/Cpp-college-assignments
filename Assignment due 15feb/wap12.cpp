//Convert a given decimal number to its binary equivalent
#include <iostream>
#include <cmath>
using namespace std;
string toBinary(int n){
  if(n==0){
    return "";
  }
  return toBinary(n/2) + to_string(n%2);
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    string binaryVal = toBinary(n);
  cout << binaryVal;
    return 0;
}