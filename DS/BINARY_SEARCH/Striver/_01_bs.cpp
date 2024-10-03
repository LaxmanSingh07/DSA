/*

Binary Search is a technique used to search for an element in a sorted array. It works by repeatedly dividing the search interval in half. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.


*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int bsRecursion(vector<int> &arr, int target, int left, int right)
{
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return bsRecursion(arr, target, mid + 1, right);
    else
        return bsRecursion(arr, target, left, mid - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    cout << binarySearch(arr, target) << endl;
    return 0;
}
