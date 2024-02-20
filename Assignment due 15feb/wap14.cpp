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
void printEven(int arr[], int len)
{
  cout << "The even valued-elements are ";
  for (int j = 0; j < len; j++)
  {
    if (arr[j] % 2 == 0)
    {
      cout << arr[j] << ' ';
    }
  }
  cout << endl;
}
void printOdd(int arr[], int len)
{
  cout << "The odd valued-elements are ";
  for (int j = 0; j < len; j++)
  {
    if (arr[j] % 2 != 0)
    {
      cout << arr[j] << ' ';
    }
  }
  cout << endl;
}
void printAvg(int arr[], int len)
{

  int sum = 0;
  for (int j = 0; j < len; j++)
  {
    sum += arr[j];
  }
  float avg = sum / len;
  cout << "The average and sum are " << avg << ' ' << sum << endl;
}
void printMaxMin(int arr[], int len)
{
  sort(arr, arr + len);
  cout << "The max and min element are " << arr[len - 1] << ' ' << arr[0] << endl;
}
void removeDupl(int arr[], int len)
{
  set<int> noDupl;
  for (int i = 0; i < len; i++)
  {
    noDupl.insert(arr[i]);
  }
  int arrSize = noDupl.size();
  int newArr[arrSize];
  int i = 0;
  for (auto it = noDupl.begin(); it != noDupl.end(); it++)
  {
    arr[i] = *it;
    i++;
  }
  cout << "The array with no duplicates is" << endl;
  for (int i = 0; i < arrSize; i++)
  {
    cout << newArr[i] << ' ';
  }
}

void printReverse(int arr[], int len)
{
  cout << "The reversed array is ";
  for (int i = len - 1; i >= 0; i--)
  {
    cout << arr[i] << ' ';
  }
}

void fillArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

int main()
{
  int len1;

  cout << "Enter the number of elements in array 1" << endl;
  cin >> len1;

  int arr1[len1];

  cout << "Enter the  elements in array 1" << endl;
  fillArr(arr1, len1);
  cout << "What action do you want to perform" << endl;
  cout << "1.Print the even-valued elements" << endl;
  cout << "2.Print the odd-valued elements" << endl;
  cout << "3.Calculate and print the sum and average of the elements of array" << endl;
  cout << "4.Print the maximum and minimum element of array " << endl;
  cout << "5.Remove the duplicates from the array" << endl;
  cout << "6.Print the array in reverse order" << endl;
  cout << "Enter the number of the function you want to perform" << endl;
  int option = 0;
  cin >> option;
  switch (option)
  {
  case 1:
    printEven break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  }
  for (int i = 0; i < len1; i++)
  {
    cout << arr1[i];
  }
  return 0;
}