#include <bits/stdc++.h>
using namespace std;
map<char, int> alphaMapping(vector<char> arr, int len)
{
    map<char, int> table;
    for (auto it : arr)
    {
        table[it]++;
    }
    return table;
}
int main(int argc, char *argv[])
{
    try
    {
        if (argc < 2)
        {
            throw invalid_argument("There should at least be one word");
        }
        else
        {
            vector<string> temp;
            vector<char> arr;
            for (int i = 1; i < argc; i++)
            {
                temp.push_back(argv[i]);
            }
            for (auto it : temp)
            {
                for (auto x : it)
                {
                    if (x != ' ')
                    {
                        arr.push_back(x);
                    }
                }
            }
            map<char, int> table = alphaMapping(arr, arr.size());
            for (auto it : table)
            {
                cout << it.first << ' ' << ':' << ' ' << it.second;
                cout << endl;
            }
        }
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }

    return 0;
}