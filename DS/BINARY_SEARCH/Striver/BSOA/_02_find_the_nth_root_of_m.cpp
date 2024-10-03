#include <bits/stdc++.h>
using namespace std;

/* find the nth root of m

### Brute force

- start from 1 and check for every number if it is the nth root of m or not
- if it is the nth root of m then return that number
- if no then return -1



for(int i=1;i<=m;i++){
    if(pow(i,n)==m){
        return i;
    }
}

Time: O(m*logn)

### Optimal: Binary Search

- start from 1 and high =m

- find mid = low+(high-low)/2

- check if mid^n==m then return mid

- if mid^n>m then high=mid-1

- if mid^n<m then low=mid+1

return -1 if not found





*/

int power(int x, int n)
{
    int ans = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = ans * x;
            n--;
        }
        else
        {
            x = x * x;
            n = n / 2;
        }
    }
}

int findNthRoot(int m, int n)
{
    int low = 1, high = m;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) > m)
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

int main()
{
    int n;
    cin >> n;

    int m;

    cin >> m;

    cout << findNthRoot(m, n) << endl;
}