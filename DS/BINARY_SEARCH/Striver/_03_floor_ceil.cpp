/*
 find the floor and ceil of a number in a sorted array

    floor: largest number smaller than or equal to the target
    ceil: smallest number greater than or equal to the target

*/

#include <bits/stdc++.h>
using namespace std;

int floor(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] <= target)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    return r;
}

int ceil(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;

    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] >= target)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return l;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}