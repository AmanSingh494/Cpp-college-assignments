// Write a function that checks whether a given string is Palindrome or not. Use this function to find whether the string entered by user is Palindrome or not.
#include <iostream>
#include <algorithm>
using namespace std;
void palinCheck(string str)
{
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  bool flag = true;
  for (int i = 0; i < str.length() / 2; i++)
  {
    auto start = str.begin();
    auto end = str.end();
    start += i;
    end -= i + 1;
    if (*start != *end)
    {
      flag = false;
      break;
    }
  }
  if (flag)
  {
    cout << "the given string is a Palindrome" << endl;
  }
  else
  {
    cout << "the given string is not a Palindrome" << endl;
  }
}
int main()
{
  string str;
  cout << "Enter the word" << endl;
  cin >> str;
  palinCheck(str);
  return 0;
}