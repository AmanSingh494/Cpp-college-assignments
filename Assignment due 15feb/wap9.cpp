//Print the ASCII code of all the numbers in a given range 
#include <iostream>
using namespace std;
string toBinary(int n){
  if(n==0){
    return "";
  }
  return toBinary(n/2) + to_string(n%2);
}
void ascii(int n1,int n2){
  
}
int main()
{
    int n1,n2= 0;
    cout << "Enter the range of the numbers " << endl;
    cin >> n1 >> n2;
    ascii(n1,n2);
    return 0;
}