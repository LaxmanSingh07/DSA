#include <bits/stdc++.h>
using namespace std;

/*
- count the number of nice subarrays in the array
- nice subarray is the subarray that contains at most k odd numbers

- same as of the longest binary subarray with sum k change all the numbers from 1 to 0 and 0 to 1
*/

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int k;
    cin >> k;

    for (int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}