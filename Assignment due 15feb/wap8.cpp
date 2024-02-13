//Print Fibonacci series
#include <bits/stdc++.h>
#include <list>
using namespace std;
void fibonacci(n){
    list<int> seq = {0,1};
    for(int a =0;a<n-2;a++){
      auto  lastIt = --(seq.end());
      auto secLastIt= prev(seq.end(),2);     int sum = *lastIt + *secLastIt;
       seq.push_back(sum);
    }
    for(auto it = seq.begin();it!=seq.end();it++){
        cout << *it <<' ' ;
    }
    
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    fibonacci(n);
    return 0;
}