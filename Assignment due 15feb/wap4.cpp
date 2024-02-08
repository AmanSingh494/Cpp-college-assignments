// Write a function to find whether a given no. is prime or not. Use the same to
// generate prime numbers less than 100.
#include <iostream>
using namespace std;
void primeNo(int n) {
  // check for prime number
  if (n % 2 == 0) {
    cout << n << " is not a prime number";

  } else {
    cout << n << " is a prime number";
  }
  //  finding prime number below 100
  cout << "The list of prime numbers below 100:";
  for (int i = 3; i <= 100; i++) {
    if (i % 2 != 0) {
      cout << i;
    }
  }
}
int main() {
  int n;
  cout << "Enter the value of n";
  cin >> n;
  primeNo(n);
}