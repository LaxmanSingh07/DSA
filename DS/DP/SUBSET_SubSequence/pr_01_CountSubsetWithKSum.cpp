#include <iostream>
#include <vector>
using namespace std;



// Recursive
//  int f(int ind,int sum,vector<int>&num){
//      if(sum==0) return 1;
//      if(ind==0) return num[0]==sum;

//     int notTake=f(ind-1,sum,num);
//     int take=0;
//     if(num[ind]<=sum)
//      take=f(ind-1,sum-num[ind],num);

//     return notTake+take;
// }

// MEMOIZATION

// int f(int ind,int sum,vector<int>&num,vector<vector<int>>&dp){
//     if(sum==0) return 1;
//     if(ind==0) return num[0]==sum;

//     if(dp[ind][sum]!=-1) return dp[ind][sum];
//     int notTake=f(ind-1,sum,num,dp);
//     int take=0;
//     if(num[ind]<=sum)
//      take=f(ind-1,sum-num[ind],num,dp);

//     return dp[ind][sum]=notTake+take;
// }

int findWays(vector<int> &nums, int tar)
{
    // RECURSIVE
    //  int n=nums.size();
    //  return f(n-1,tar,nums);

    // MEMOIZATION

    // vector<vector<int>>dp(nums.size(),vector<int>(tar+1,-1));
    // return f((nums.size()-1),tar,nums,dp);

    // vector<vector<int>>dp(nums.size(),vector<int>(tar+1,0));

    // TABULATION

    // int n=nums.size();
    // for(int i=0;i<n;i++) dp[i][0]=1;

    // if(nums[0]<=tar) dp[0][nums[0]]=1;

    // for(int i=1;i<n;i++){
    //     for(int sum=0;sum<=tar;sum++){
    //        int notTake=dp[i-1][sum];
    //        int take=0;
    //        if(nums[i]<=sum)
    //         take=dp[i-1][sum-nums[i]];
    //         dp[i][sum]=notTake+take;
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=tar;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return dp[n-1][tar];

    // space optimization


    // this code will run under the constrain if the value of the element of the array 
    // is grater than that of 0
    
    int n = nums.size();
    vector<int> prev(tar + 1, 0), curr(tar + 1);

    prev[0] = curr[0] = 1;
    if (nums[0] <= tar)
        prev[nums[0]] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int sum = 0; sum <= tar; sum++)
        {
            int notTake = prev[sum];
            int take = 0;
            if (nums[i] <= sum)
                take = prev[sum - nums[i]];
            curr[sum] = notTake + take;
        }
        prev = curr;
    }

    return prev[tar];
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << findWays(nums, 5);

    return 0;
}