/*WAP to perform following actions on an array entered by the user: 
Print the even-valued elements 
Print the odd-valued elements 
Calculate and print the sum and average of the elements of array 
Print the maximum and minimum element of array 
Remove the duplicates from the array 
Print the array in reverse order*/
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
void printEven(int arr[],int len){
  cout << "The even valued-elements are"<< endl;
  for(int j = 0;j<len;j++){
    if(arr[j] %2==0){
      cout << arr[j] << ' ';
    }
    
  }
}
void printOdd(int arr[],int len){
  cout << "The odd valued-elements are"<< endl;
  for(int j = 0;j<len;j++){
    if(arr[j] %2!=0){
      cout << arr[j] << ' ';
    }
    
  }
}
void printAvg(int arr[],int len){
  
  int sum = 0;
  for(int j = 0;j<len;j++){
    sum+=arr[j];
  }
  float avg = sum/len;
  cout <<"The average and sum are "<< avg<< ' '<<sum << endl;
}
void printMaxMin(int arr[],int len){
  sort(arr,arr+len);
  cout << "The max and min element are"<< arr[len-1]<<' '<<arr[0]<<endl; 
}
void removeDupl(int arr[],int len){
  set<int> noDupl ;
  for(int i=0;i<len;i++){
    noDupl.insert(arr[i]);
  }
  int arrSize = noDupl.size();
  int newArr[arrSize];
  for(int i=0;i<arrSize;i++){
    auto it= noDupl.begin();
    it += i;
    arr[i]= *it;
  }
  cout << "The array eith no duplicates is" << endl;
  for(int i = 0;i<arrSize;i++){
    cout << newArr[i] << ' ';
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
  
  cout << "Enter the number of elements in array 1"<< endl;
  cin >> len1;
  
  int arr1[len1];
  
  
  cout << "Enter the  elements in array 1"<< endl;
  fillArr(arr1,len1);
  
  for(int i = 0;i<len1;i++){
    cout << arr1[i];
  }
    return 0;
}