#include <iostream>
#include <cmath>
using namespace std;
void sum_n_count2(int n){
    int count=0;
    int sum=0;
    while(n>0){
        sum +=n%10;
        count++;
        n/=10;
    }
    cout << "Sum and count of the given number is " << sum << " and " << count;
}
void sum_n_count(int n){
    int count=0;
    int sum=0;
    for(int i=1;n!= n%(int)pow(10,i-1);i++){

        count = count +1;
        sum = sum +(n%(int)pow(10,i))/(int)pow(10,i-1)  ;

    }
    cout << "Sum and count of the given number is " << sum << " and " << count;
}
int main() {
    
    int n;
    cout << "Enter value";
    cin >> n;
    sum_n_count2(n);
    return 0;
}