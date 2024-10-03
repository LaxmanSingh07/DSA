// Lower bound : smallest index of the element which is greater than or equal to the target element
// Upper bound : smallest index of the element which is greater than the target element

#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
}

// stl implementation: lower_bound(arr.begin(), arr.end(), target) - arr.begin();

int upperBound(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
}