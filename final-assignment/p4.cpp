#include <bits/stdc++.h>
using namespace std;
void showAddress(string str)
{
    for (char &it : str)
    {
        auto address = &it;
        cout << it << ' ' << ':' << ' ' << static_cast<void *>(address) << endl;
    }
}
void concatenate(string first)
{
    cout << "Enter the other string" << endl;
    string str;
    cin >> str;
    cout << first + str;
}
void compare(string first)
{
    cout << "Enter the other string" << endl;
    string str;
    cin >> str;
    string result;
    if (first == str)
        result = "Both of the string are same";
    else if (first > str)
        result = "String 1 is greater than string 2";
    else
        result = "String 2 is greater than string 1";
    cout << result;
}
void length(string str)
{
    int count = 0;
    char *ptr = &str[0];
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    cout << "The length of the string is  " << count << endl;
}
void uprcase(string &str)
{
    for (char &x : str)
    {
        if (x != ' ' && x > 96)
        {
            x = x - 32;
        }
    }
}
void reverse(string &str)
{
    int size = str.size();
    for (int i = 0; i < size / 2; i++)
    {
        swap(str[i], str[size - i - 1]);
    }
}
void insertStr(string &str)

{
    cout << "Enter the other string and the position" << endl;
    string adder;
    int pos;
    cin >> adder >> pos;
    string firstPart;
    string secondPart;
    for (int i = 0; i < str.size(); i++)
    {
        if (i < pos)
            firstPart += str[i];
        else
            secondPart += str[i];
    }
    str = firstPart + adder + secondPart;
}

int main()
{
    int option;
    cout << "Enter the number of the option:" << endl;
    cout << "1. Show address of each character in string" << endl;
    cout << "2. Concatenate two strings" << endl;
    cout << "3. Compare two strings" << endl;
    cout << "4. Calculate length of the string (use pointers)" << endl;
    cout << "5. Convert all lowercase characters to uppercase" << endl;
    cout << "6. Reverse the string" << endl;
    cout << "7. Insert a string in another string at a user specified position" << endl;
    cin >> option;
    cout << "Enter the string" << endl;
    string str;
    cin >> str;
    switch (option)
    {
    case 1:
        showAddress(str);
        break;
    case 2:
        concatenate(str);
        break;
    case 3:
        compare(str);
        break;
    case 4:
        length(str);
        break;
    case 5:
        uprcase(str);
        cout << "The new string is " << str;
        break;
    case 6:
        reverse(str);
        cout << "The new string is " << str;
        break;
    case 7:
        insertStr(str);
        cout << "The new string is " << str;
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }
    return 0;
}