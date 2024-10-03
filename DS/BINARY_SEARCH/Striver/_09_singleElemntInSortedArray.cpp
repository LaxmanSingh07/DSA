/*
 - single element in a sorted array

 - all the elements expect one element are present twice in the array

 arr[]=[1,1,2,2,3,3,4,4,5,5,6,6,7]

 Brute force: linear search

 if i am at  index i then either i-1 or i+1 should be equal to arr[i]

 - any index which is not same as i-1 and i+1 is the single element

for(int i=0;i<n;i++){
    if(i==0){
      if(arr[i]!=arr[i+1]){
          return arr[i];
      }
    }
    else if(i==n-1){
        if(arr[i]!=arr[i-1]){
            return arr[i];
        }
    }
    else{
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            return arr[i];
        }
    }
}

Time: O(n)

Optimal: Binary Search

- we can apply binary search to find the single element in the sorted array

find the observation in index of array

- element which is not present twice that elements all the elements on the left will have index as (even,odd) but after that element in right side all the elements will have index as (odd,even)

#### Conclusion

- (even,odd) I am on the left half element will be on the right half

- (odd,even) I am on the right half element will be on the left half

we have to write the edge cases for the first and last element



*/

#include <bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int> &arr, int n)
{
    int low = 2;
    int high = n - 3;

    if (arr[0] != arr[1])
    {
        return arr[0];
    }

    if (arr[n - 1] != arr[n - 2])
    {
        return arr[n - 1];
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
        {
            return arr[mid];
        }

        else if (mid % 2 == 0 && arr[mid] == arr[mid + 1] || mid % 2 == 1 && arr[mid] == arr[mid - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
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

    cout << findSingleElement(arr, n) << endl;
}