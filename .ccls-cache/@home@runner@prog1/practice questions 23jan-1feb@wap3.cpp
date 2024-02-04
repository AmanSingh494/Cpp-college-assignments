 #include <iostream>
 #include <cmath>
  using namespace std;
//  int reverseNumber(int num){
//    // 2345 = 5432
//    // 2345%10 = 5, 2345/10=234, 234/10 = 23, 23/10 = 2,2/10 = 0.2 
//    // 2345 /1000 = 2
//    // num %10 * 10 ** count , 2345 % 10 * 10 ** (count - 1) = 5000
//    //  num / 10 = 234
//    // num % 10 * * 10 **(count - 2) 
//    int reversedNumber;
//    int count;
//    int number = num;
//    while(num >0){
//      number = number%10;
//      count = count + 1;
//   }
//    for(int i = 1;i <= count; i++){
//      reversedNumber = reversedNumber + (num% 10) * (pow(10,+count-i));
//    }
//    return reversedNumber;
// }
//  int main(){
//    int number;
//   cout << "Enter a number";
//    cin >> number;
//    int reversedNumber = reverseNumber(number);
//    cout << reversedNumber;
//  }