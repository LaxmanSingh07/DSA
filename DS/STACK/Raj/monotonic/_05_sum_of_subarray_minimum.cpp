/*
 Sum of Subarray Minimums


Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.



- brute force :

    generate all the subarrays and find the minimum of each subarray and add it to the result

    tc :)(n^2)
    sc : O(1)


 */

#include <bits/stdc++.h>

using namespace std;

int sumSubarrayMins(vector<int> &arr)
{
    int n = arr.size();
    int mod = 1e9 + 7;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int minEle = INT_MAX;
        for (int j = i; j < n; j++)
        {
            minEle = min(minEle, arr[j]);
            ans = (ans + minEle) % mod;
        }
    }

    return ans;
}

/*
    - observation

    [1,4,6,7,3,8,1]


    [1]
    [1,4]
    [1,4,6]
    [1,4,6,7]
    [1,4,6,7,3]
    [1,4,6,7,3,8]
    [1,4,6,7,3,8,1]

    [4]
    [4,6]
    [4,6,7]
    [4,6,7,3]
    [4,6,7,3,8]
    [4,6,7,3,8,1]

    [6]
    [6,7]
    [6,7,3]
    [6,7,3,8]
    [6,7,3,8,1]

    [7]
    [7,3]
    [7,3,8]
    [7,3,8,1]

    [3]
    [3,8]
    [3,8,1]

    [8]
    [8,1]

    [1]


    notice one thing suppose I want to know the contribution of 3 in the answer

    then 3 will be the minimum element in the subarrays until we found any smaller element than 3 in the left or right


    - that is find the next smaller element on th right and the previous smaller element on the left


*/

int sumSubarrayMins2(vector<int> &v)
{
    int n = v.size();
    int mod = 1e9 + 7;
    stack<int> st;
    vector<int> left(n), right(n);

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[st.top()] > v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            left[i] = -1;
        }
        else
        {
            left[i] = st.top();
        }

        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[st.top()] >= v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            right[i] = n;
        }
        else
        {
            right[i] = st.top();
        }

        st.push(i);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = (ans + v[i] * (i - left[i]) * (right[i] - i)) % mod;
    }

    return ans;
}