/*
find the peak element

peak element: element which is greater than its neighbours
arr[i-1]<arr[i]>arr[i+1]

- array can have multiple peak elements
- we have to find any one of the peak element

arr1[]=[1,2,3,4,5,6,7,8,5,1] peak element=8
arr2[]=[1,2,1,3,5,6,4] peak element=2 or 6

arr3[]=[1,2,3,4,5]

- in the question assume that arr[-1]=arr[n]=INT_MIN

peak element =5

arr4[]=[5,4,3,2,1] peak element=5

Brute force: linear search

we will check for every element if it is peak element or not

for(int i=0;i<n;i++){
    if(i==0 && arr[i]>arr[i+1]){
        return arr[i];
    }
    else if(i==n-1 && arr[i]>arr[i-1]){
        return arr[i];
    }
    else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        return arr[i];
    }
}

Time: O(n)
space: O(1)

Optimal: Binary Search

but how to apply binary search in this case

- First solve for only 1 peak element

arr[]=[2]

- if array has only one element then that element is peak element

arr= [1,2,3,4,5,6,7,8,5,1]
indx= [0,1,2,3,4,5,6,7,8,9]

low =0, high=9

mid=l+(r-l)/2=4

there can be 3 cases

- if mid is peak element then return mid
- if mid-1>mid then peak element is on the left side
- if mid+1>mid then peak element is on the right side

 arr[mid] --> 5
 i will check if 5 is peak element or not

 check if arr[mid-1]>arr[mid] and arr[mid+1]>arr[mid] then return mid

    if arr[mid-1]>arr[mid] then peak element is on the left side
        - high=mid-1

    if arr[mid+1]>arr[mid] then peak element is on the right side
        - low=mid+1


for edge cases

  check intial and final element at the starting

*/

#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return 0; // i have to return index
    }
    if (arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[n - 1] > arr[n - 2])
    {
        return n - 1;
    }

    int low = 1;
    int high = n - 2;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

![image]()

    // will this course work for multiple peak elements
    // yes little change in the code

    /*
     [1,5,1,2,1]

     low =1, high=3

     mid =2

     - in this case mid is the local minima
     - then any of the cases will not be true (infinte loop)

     - that's why i have changed elss if condition to else

    */

    int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findPeakElement(arr, n);

    return 0;
}