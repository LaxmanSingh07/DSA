#include <bits/stdc++.h>
using namespace std;

// Recusion

// int f(int ind,int T,vector<int>&nums)
// {
//     if(ind==0)
//     {
//         if(T%nums[0]==0){
//             return T/nums[0];
//         }
//         return 1e9;
//     }

//     int notTake=0+f(ind-1,T,nums);
//     int take=1e9;
//     if(T>=nums[ind]){
//         take=nums[ind]+f(ind,T-nums[ind],nums);
//     }
//     return min(take,notTake);
// }

// Memo

int f(int ind, int T, vector<int> &nums, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (T % nums[0] == 0)
        {
            return T / nums[0];
        }
        return 1e9;
    }

    if (dp[ind][T] != -1)
    {
        return dp[ind][T];
    }

    int notTake = 0 + f(ind - 1, T, nums, dp);
    int take = 1e9;
    if (T >= nums[ind])
    {
        take = 1 + f(ind, T - nums[ind], nums, dp);
    }
    return dp[ind][T] = min(take, notTake);
}

int minimumElements(vector<int> &nums, int target)
{
    int n = nums.size();

    // Recursion

    // int ans=f(n-1,target,nums);

    // if(ans>=1e9) return -1;
    // return ans;

    // Memoization

    // vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    // int ans = f(n - 1, target, nums,dp);

    // if (ans >= 1e9)
    //     return -1;
    // return ans;

    // Tabulation

    // vector<vector<int>> dp(n, vector<int>(target + 1, 0));

    // for(int T=0;T<=target;T++)
    // {
    //     if(T%nums[0]==1) dp[0][T]=T/nums[0];
    //     else{
    //         dp[0][T]=INT_MAX;
    //     }
    // }

    // for(int ind=1;ind<n;ind++)
    // {
    //     for(int T=0;T<target;T++){
    //         int notTake=0+dp[ind-1][T];
    //         int take=INT_MAX;
    //         if(nums[ind]<=T)
    //         {
    //             take=1+dp[ind][T-nums[ind]];

    //         }
    //         dp[ind][T]=min(take,notTake);
    //     }
    // }

    // int ans = dp[n - 1][target];
    // if (ans >= 1e9)
    //     return -1;
    // return ans;

    // Space optimzation

    vector<int> prev(target + 1, 0), curr(target + 1, 0);

    for (int T = 0; T <= target; T++)
    {
        if (T % nums[0] == 1)
           prev[T] = T / nums[0];
        else
        {
            prev[T] = INT_MAX;
        }
    }

    for (int ind = 1; ind < n; ind++)
    {
        for (int T = 0; T < target; T++)
        {
            int notTake = 0 + prev[T];
            int take = INT_MAX;
            if (nums[ind] <= T)
            {
                take = 1 + curr[T - nums[ind]];
            }
           prev[T]= min(take, notTake);
        }
        prev=curr;
    }

    int ans=prev[target];
    if(ans>=1e9) return -1;
    return ans;



}
int main()
{

    return 0;
}