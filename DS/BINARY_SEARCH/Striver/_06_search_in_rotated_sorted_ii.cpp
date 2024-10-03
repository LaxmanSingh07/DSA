/*
 Search in Rotated Sorted Array II
 array may contain duplicates

  num=[7,8,1,2,3,3,3,4,5,6]  (rotated array with duplicates)

    target= 3

  previous approach will not work in this case because we can't eliminate one half of the array

  ex: [3,2,3,3,3,3]

  in this example

  arr[low]=arr[mid]=arr[high]=3

  there is ambiguity in which part of the array is sorted and which part to eliminate

  so we have to shrink the array for eliminating the duplicates whenever this condition occurs


*/

#include <bits/stdc++.h>
using namespace std;

bool searchInRotatedSortedArray(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return true;
        }

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
        }
        else if (arr[low] <= arr[mid])
        {
            if (target >= arr[low] && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (target >= arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
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

    int target;
    cin >> target;

    cout << searchInRotatedSortedArray(arr, target) << endl;

    return 0;
}

// time complexity : O(logn) average case

/*

arr=[3,3,3,1,3,3,3,3,3]

target=1

at worst case we might shrink n/2 elements in each iteration

*/

// time complexity : O(n) worst case