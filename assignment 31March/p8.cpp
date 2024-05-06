#include <bits/stdc++.h>
using namespace std;
void copyText(string fileToCopyFrom, string fileToCopyTo)
{
    // creating a new file and opening the previous file again
    ifstream File(fileToCopyFrom);
    ofstream newFile(fileToCopyTo);
    try
    {
        if (!File.is_open())
        {
            throw runtime_error("the file " + fileToCopyFrom + " does not exist");
            return;
        }
        else if (!newFile.is_open())
        {
            throw runtime_error("the file " + fileToCopyTo + " does not exist");
        }
        else
        {
            string word;
            while (File >> word)
            {
                newFile << word;
            }
            File.close();
            newFile.close();
            cout << "Text copied successfully" << endl;
        }
    }
    catch (const runtime_error e)
    {
        cout << e.what() << endl;
    }

    // in the newFile all the whitespaces have been removed. As commas, full stops etc have not been removed, it seems to have spaces but it is not so.
}
int main(int argc, char *argv[])
{
    try
    {
        if (argc != 3)
        {
            throw invalid_argument("There should be two arguments, the name of the file to copy text from and name of the file to copy text to");
        }
        else
        {
            string file1 = argv[1];
            string file2 = argv[2];
            copyText(file1, file2);
            return 0;
        }
    }
    catch (const invalid_argument e)
    {
        cout << e.what() << endl;
    }
}