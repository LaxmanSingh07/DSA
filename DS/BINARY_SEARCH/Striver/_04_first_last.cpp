/*
 find the first and last index of the element in a sorted array

 Brute force

 first =-1 and last =-1 ;

 for(int i=0;i<n;i++){
    if(arr[i]==target){
        if(first==-1) first=i;
        last=i;
    }
 }

    Time: O(n)


Optimal : Binary Search


// you can use the lower and upper bound functions
// but if lower bound function return -1 then you just return {-1,-1}
// if lower bound function return a valid index then you can return {lower_bound,upper_bound}


// although you can use the simple binary search to find the first and last index of the element


*/

#include <bits/stdc++.h>
using namespace std;

int findFirstLastOccurance(vector<int> &arr, int target, bool flag)
{
    int ans = -1;
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            if (flag)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int idx = 0; idx < size; idx++)
    {
        cin >> arr[idx];
    }

    int target;
    cin >> target;

    int firstOccurance = findFirstLastOccurance(arr, target, true);
    int lastOccurance = findFirstLastOccurance(arr, target, false);

    cout << firstOccurance << " " << lastOccurance << endl;
}
