/*
 find how many times has an array been rotated

 num[]= [3,4,5,1,2]
 ans=3

 because smallest element in the array is point of rotation
 now if we find the index of minimum element in the array then we can find the number of times array has been rotated
*/

#include <bits/stdc++.h>
using namespace std;

int findMinElement(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = 1e9;
    int idx = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                ans = arr[low];
                idx = low;
            }
            break;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                ans = arr[low];
                idx = low;
            }

            low = mid + 1;
        }
        else
        {
            if (arr[mid] < ans)
            {
                ans = arr[mid];
                idx = mid;
            }

            high = mid - 1;
        }
    }

    cout << idx << endl;

    return idx;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int idx = findMinElement(arr);

    cout << idx << endl;

    return 0;
}
