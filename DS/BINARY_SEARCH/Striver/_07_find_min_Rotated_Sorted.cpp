/*

 find minimum in a rotated sorted array

 arr[]=[4,5,6,7,0,1,2]

 Brute force: linear search

        Time: O(n)

    Optimal: Binary Search

    - we can apply binary search to find the minimum element in the rotated sorted array

    - first find the sorted half

    pick the smallest element in that half and elminate this half

*/

#include <bits/stdc++.h>
using namespace std;

int findMinElement(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = 1e9;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

/*
 this solution can be optimized

 [4,5,6,0,1,2]

 if(arr[low]<=arr[hight]) return arr[low]


*/

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

// time complexity: O(logn)