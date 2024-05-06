#include <bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> mergedArray = arr1;

    mergedArray.insert(mergedArray.end(), arr2.begin(), arr2.end());

    sort(mergedArray.begin(), mergedArray.end());

    return mergedArray;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    for (int i : mergedArray)
    {
        cout << i << " ";
    }

    return 0;
}