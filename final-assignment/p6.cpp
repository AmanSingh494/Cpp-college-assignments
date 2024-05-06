#include <bits/stdc++.h>
using namespace std;
int binarySearchIterative(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

// Binary search with recursion
int binarySearchRecursive(const vector<int> &arr, int target, int left, int right)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binarySearchRecursive(arr, target, mid + 1, right);
    }
    else
    {
        return binarySearchRecursive(arr, target, left, mid - 1);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    int resultIterative = binarySearchIterative(arr, target);
    int resultRecursive = binarySearchRecursive(arr, target, 0, arr.size() - 1);

    cout << "Iterative: " << resultIterative << endl;
    cout << "Recursive: " << resultRecursive << endl;

    return 0;
}