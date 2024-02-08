// Write a function to find whether a given no. is prime or not. Use the same to
// generate prime numbers less than 100.
#include <iostream>

#include <bits/stdc++.h>
using namespace std;
void primeNo(int n) {
  // check for prime number
  if (n % 2 == 0) {
    cout << n << " is not a prime number"<<endl;

  } else {
    cout << n << " is a prime number"<<endl;
  }
  //  finding prime number below 100
  cout << "The list of prime numbers below 100:"<<endl;
  bool flag = true;
  for (int i = 2; i <= 100; i++) {
    for(int x = 2;x<=floor(i/2.0);x++){
      if(i%x==0){
        flag = false;
        break;
      }
    }
  }
}
int main() {
  int n;
  cout << "Enter the value of n"<<endl;
  cin >> n;
  primeNo(n);
}