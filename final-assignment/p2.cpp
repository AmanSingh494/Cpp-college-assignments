#include <bits/stdc++.h>
using namespace std;
void removeDupl(int arr[], int len)
{
  set<int> noDupl;
  for (int i = 0; i < len; i++)
  {
    noDupl.insert(arr[i]);
  }
  int arrSize = noDupl.size();
  int i = 0;
  for (auto it = noDupl.begin(); it != noDupl.end(); it++)
  {
    arr[i] = *it;
    i++;
  }
  cout << "The array with no duplicates is" << endl;
  for (int i = 0; i < arrSize; i++)
  {
    cout << arr[i] << ' ';
  }
}
int main(){
    int arr[] = {1,2,3,3,4,5,6,5,6,7,8,9,8,9,8};
    removeDupl(arr,15);
    return 0;
}