#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream File("text.txt"); // assuming the text file is already present
    ofstream newFile("newfile.txt");
    if (File.is_open() && newFile.is_open())
    {
        string word;
        while (File >> word)
        {
            newFile << word;
        }
        File.close();
        newFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }

    return 0;
}