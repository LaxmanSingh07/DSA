#include <bits/stdc++.h>
using namespace std;

// Recursion

// int f(int ind, int w, vector<int> &wt, vector<int> &val)
// {
//     if (ind == 0)
//     {
//         if (wt[0] <= w)
//             return val[0];
//         return 0;
//     }

//     int notTake = 0 + f(ind - 1, w, wt, val);
//     int take = INT_MIN;
//     if (wt[ind] <= w)
//     {
//         take = val[ind] + f(ind - 1, w - wt[ind], wt, val);
//     }

//     return max(take, notTake);
// }

// Memoization

int f(int ind, int w, vector<int> &wt, vector<int> &val, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (wt[0] <= w)
            return val[0];
        return 0;
    }

    if (dp[ind][w] != -1)
    {
        return dp[ind][w];
    }

    int notTake = 0 + f(ind - 1, w, wt, val, dp);
    int take = INT_MIN;
    if (wt[ind] <= w)
    {
        take = val[ind] + f(ind - 1, w - wt[ind], wt, val, dp);
    }

    return dp[ind][w] = max(take, notTake);
}
int knapsack(vector<int> &wt, vector<int> val, int n, int maxWeight)
{
    // return f(n - 1, maxWeight, wt, val);

    // vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));

    // Memoization
    //  return f(n-1,maxWeight,wt,val,dp);

    // Tabulation

    // vector<vector<int>>dp(n,vector<int>(maxWeight+1,0));

    // for(int w=wt[0];w<=maxWeight;w++) dp[0][w]=val[0];
    // for(int ind=1;ind<n;ind++)
    // {
    //     for(int w=0;w<=maxWeight;w++)
    //     {
    //         int notTake=0+dp[ind-1][w];
    //         int take=INT_MIN;
    //         if(wt[ind]<=w)
    //         {
    //             take=val[ind]+dp[ind-1][w-wt[ind]];
    //         }
    //         dp[ind][w]=max(take,notTake);
    //     }
    // }
    // return dp[n-1][maxWeight];

    // space optimzation

    // vector<int> prev(maxWeight + 1, 0), curr(maxWeight + 1, 0);

    // for (int w = wt[0]; w <= maxWeight; w++)
    //     prev[w] = val[0];
    // for (int ind = 1; ind < n; ind++)
    // {
    //     for (int w = 0; w <= maxWeight; w++)
    //     {
    //         int notTake = 0 + prev[w];
    //         int take = INT_MIN;
    //         if (wt[ind] <= w)
    //         {
    //             take = val[ind] + prev[w - wt[ind]];
    //         }
    //         curr[w] = max(take, notTake);
    //     }
    //     prev = curr;
    // }
    // return prev[maxWeight];

    // more space optimzatoin

    vector<int> prev(maxWeight + 1, 0);

    for (int w = wt[0]; w <= maxWeight; w++)
        prev[w] = val[0];
    for (int ind = 1; ind < n; ind++)
    {
        for (int w = maxWeight; w >= 0; w--)
        {
            int notTake = 0 + prev[w];
            int take = INT_MIN;
            if (wt[ind] <= w)
            {
                take = val[ind] + prev[w - wt[ind]];
            }
            prev[w] = max(take, notTake);
        }
       
    }
    return prev[maxWeight];
}
int main()
{

    return 0;
}