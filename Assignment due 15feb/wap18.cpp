//Given two ordered arrays of integers, write a program to merge the two arrays to get an ordered array. 
#include <iostream>
#include <algorithm>
using namespace std;
void mergeArr(int arr1[],int arr2[],int arr3[],int len1,int len2){
  for(int i=0;i<len1+len2;i++){
    if(i<len1){
      arr3[i] = arr1[i];
    }
    else{
      arr3[i] = arr2[i-len1];
    }
  }
}
void fillArr(int arr[] , int size){
  for(int i = 0;i<size; i++){
    cin >> arr[i];
  }
}
int main()
{
  int len1;
  int len2;
  cout << "Enter the number of elements in array 1"<< endl;
  cin >> len1;
  cout << "Enter the number of elements in array 2"<< endl;
  cin >> len2;
  int arr1[len1];
  int arr2[len2];
  int mergedArr[len1+len2];
  cout << "Enter the  elements in array 1"<< endl;
  fillArr(arr1,len1);
  cout << "Enter the  elements in array 2"<< endl;
  fillArr(arr2,len2);
  mergeArr(arr1,arr2,mergedArr,len1,len2);
  int n = sizeof(mergedArr) / sizeof(mergedArr[0]);
  sort(mergedArr,mergedArr +n);
  for(int i = 0;i<len1+len2;i++){
    cout << mergedArr[i];
  }
    return 0;
}