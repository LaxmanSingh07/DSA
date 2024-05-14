#include <bits/stdc++.h>
using namespace std;

// SIMPLE RECURSION

/*
int findJumps(int ind,vector<int>&heights)
{
    if(ind==0) return 0;
    int left=findJumps(ind-1,heights)+abs(heights[ind]-heights[ind-1]);
    int right=INT_MAX;
    if(ind>1){
        right=findJumps(ind-2,heights)+abs(heights[ind]-heights[ind-2]);
    }
    return min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
    return findJumps(n-1,heights);
}

*/

// MEMO

// ALWAYS SEE THAT parameters WHICH are CHANGING

/*

int findJumps(int ind, vector<int> &heights, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int left = findJumps(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
    {
        right = findJumps(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
    }
    return dp[ind] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, -1);
    return findJumps(n - 1, heights, dp);
}

*/

// TABULATION

/*

int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, -1);

    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;

        if (i > 1)
        {
            ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        }
        dp[i] = min(fs, ss);
    }
    return dp[n - 1];
}

*/


// space optimization

// any time when we are using only 2 values then we can use space optimization (ind-1,ind-2)

int frogJump(int n, vector<int> &heights)
{

    int prev = 0;
    int prev2 = 0;

    for (int i = 1; i < n; i++)
    {
        int fs = prev + abs(heights[i] - heights[i - 1]);
        int ss = INT_MAX;
        if (i > 1)
        {
            ss = prev2 + abs(heights[i] - heights[i - 2]);
        }
        int curri = min(fs, ss);
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
int main()
{
    vector<int> heights = {7, 4, 4, 2, 6, 6, 3, 4};
    cout << frogJump(8, heights) << endl;

    return 0;
}