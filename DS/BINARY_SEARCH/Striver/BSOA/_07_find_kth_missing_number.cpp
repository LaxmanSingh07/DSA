#include <bits/stdc++.h>
using namespace std;

/*

--> find kth missing number

    - given an array of integers and an integer k
    - we have to find the kth missing number in the array
    - the array is sorted in ascending order

    arr[]= [2,3,4,7,11]
    k=5

    missing numbers= [5,6,8,9,10]

    output= 10

    ex: [5,6,10,12]

    k=6

    missing numbers= [1,2,3,4,7,8,9,11]
     ans = 7


    ********* DRY RUN **************

    arr[]= [2,3,4,7,11] k=5

    start

    i=0

    arr[i]<k : 2<5 k++; i++; (k=6)
    arr[i]<k : 3<6 k++; i++; (k=7)
    arr[i]<k : 4<7 k++; i++; (k=8)
    arr[i]<k : 7==8 i++; (k=8)

    arr[i]>k : the current value present in k is the answer

    return k


    # the reson of doing k++ is that

    Explain

    arr=[2,3,4,7] if k=1 then the missing number is 1
    arr=[2,3,4,7] if k=2 then the missing number is 5

            because I was taking that all the numbers are missing from 1 to 5 right .

            but if any number is present between 1 to 5 that means that means there can at most 5-1 =4 missing number to increment the possiblity of k missing number i have to increment the k


    ✅✅☑️☑️ NICE 🚀

    for(int i=0;i<n;i++){
        if(arr[i]<k){
            k++;
        }
        else{
            return k;
        }
    }

    return k;

    ✅ O(n) time complexity

    ✅✅☑️☑️ Binary Search 🚀

    - we can't use the binary search directly because we don't know the range of the missing numbers

    - can we find the missing range of the numbers

    yes then we can use the binary search


    arr[]=[2,3,4,7,11] k=5

    ideally arr should be if no missing numbers are there

    arr[]=[1,2,3,4,5,6,7,8,9,10,11]
    index=[0,1,2,3,4,5,6,7,8,9,10]

    till ith index no of missing numbers= arr[i]-i-1

    missing =[1,1,1,3,6]

    low = 0, high = n-1
    find mid = low+(high-low)/2

    if missing numbers at mid is less than k then missing numbers are on the right side
        low=mid+1
    else
        high=mid-1

    high to low will be range (different polarity)

    return missing[high]-(high+1)

    arr[high]+(k-missing[high])
    arr[high]+k-(arr[high]-(high+1))

    k+high+1

    or low+k








*/

int findMissing(vector<int> &arr, int k)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] - mid - 1 < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return low + k;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
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
}