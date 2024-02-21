// // 2. WAP to compute the sum of the first n terms of the following series

// // S =1-2+3-4+5…………….
// #include <bits/stdc//++.h>
#include <iostream>
using namespace std;
 int sum(int n){
  int S = 0;
  for(int i = 1;i<=n;i++){
    if(i %2==0){
      S = S-i;
    }
    else{
         S =S+ i;
       }
    }
    return S;
  }
int main(){
  int n;
  cout << "Enter the value of n"<< endl;
  cin >>n;
  int sumOfNum = sum(n);
    cout << sumOfNum;
}