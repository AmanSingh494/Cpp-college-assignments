#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
using namespace std;
void findFactors(set<int> &fact, int n) {

  for (int i = 2; i <= ceil(n / 2); i++) {
    if (n % i == 0) {
      fact.insert(i);
    }
  }
}
void hcf(int n1,int n2){
      set<int> factors1 = {1, n1};
  set<int> factors2 = {1, n2};
  findFactors(factors1, n1);
  findFactors(factors2, n2);
  set<int> commonFactors;
  /*set_intersection(factors1.begin(),factors1.end(),factors2.begin(),factors2.end(),back_inserter(commonFactors));
   */
  for (auto it1 = factors1.begin(); it1 != factors1.end(); it1++) {
    for (auto it2 = factors2.begin(); it2 != factors2.end(); it2++) {
      if (*it1 == *it2) {
        commonFactors.insert(*it1);
      }
    }
  }
  auto it = commonFactors.end();
  --it;
  cout << *it;
}
int main() {
  // Write C++ code here

  int n1, n2 = 0;
  cout << "Enter the two numbers";
  cin >> n1 >> n2;
    hcf(n1,n2);


  return 0;
}