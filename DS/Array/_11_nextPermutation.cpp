#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    return 0;
}

/* Find the next permutation

   -- if there are n element in the array then there are n! permutation possible

   -- you have to find the next permutation of the given array in ascending order
   -- you will be all back to the first permutation if the array is in descending order


   brute force :

   generate all the permutation in the sorted order and then find the next permutation
   then after than do the search for the next permutation

   time complexity : O(n! * n)

   time complexity is very high

-- in c++ library we can use the next_permutation function to find the next permutation

### Optimized approach

    this is same as of the next_permutation function in the c++ library we have to implement the same

    arr=[2,1,5,4,3,0,0]

    - in the dictory the next permutation will have longer prefix match


    let's say i am starting from the end of the array

    - at index 6 we have 0 no one in the right is greater than 0
    - at index 5 we have 0 no one in the right is greater than 0
    - at index 4 we have 3 no one in the right is greater than 3
    - at index 3 we have 4 no one in the right is greater than 4
    - at index 2 we have 5 no one in the right is greater than 5
    - at index 1 we have multiple elements in the right which are greater than 1 but we will pick only the smallest one which is greater than 1

    we have to find this break point

    in this case the value at index 1 is 1 whih will be replaced by 3

    but what after that index 1 all the elements but be placed in the sorted order

    int idx=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
        idx=i;
            break;
        }
    }

    if(idx==-1)
    {
        reverse(arr.begin(),arr.end());
        return;
    }

    for(int i=n-1;i>=index;i--)
    {
        if(arr[i]>arr[idx])
        {
            swap(arr[i],arr[idx]);
            break;
        }
    }

    reverse(arr.begin()+idx+1,arr.end());

    time complexity : O(n)


*/