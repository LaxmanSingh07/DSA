/*
 search in a rotated sorted array

 num[]= [7,8,9,1,2,3,4,5,6]  (rotated array with unique elements)

    target= 1

Brute force: linear search

    Time: O(n)


Optimal: Binary Search

- But question is how to apply binary search in this rotated sorted array and how to eliminate  one half of the array

arr[]= [7,8,9,1,2,3,4,5,6]

set low =0 , high = n-1

find mid = (low+high)/2 = 4

value at mid = 2

please identify the sorted part of the array using

- if (arr[low]<=arr[mid]) then left part is sorted
- if (arr[mid]<=arr[high]) then right part is sorted

and we are sure about the sorted part of the array wheather element present in the sorted part or not


if(arr[low]<=arr[mid]) left half is sorted
    - check if target is in the left half or not
        - if yes then high=mid-1
        - if no then low=mid+1
    if(target>=arr[low] && target<=arr[mid]) then target is in the left half
        - high=mid-1
    else
        - low=mid+1

else
    - right half is sorted
        - check if target is in the right half or not
            - if yes then low=mid+1
            - if no then high=mid-1
        if(target>=arr[mid] && target<=arr[high]) then target is in the right half
            - low=mid+1
        else
            - high=mid-1



*/