#include <iostream>
#include <vector>
using namespace std;

int mod = (int)(1e9 + 7);
// Recursive

//  int f(int ind,int sum,vector<int>&num){

//     if(ind==0)
//     {
//         if(sum==0&&num[0]==0) return 2;
//         if(sum==0||sum==num[0]) return 1;
//         return 0;
//     }
//     int notTake=f(ind-1,sum,num);
//     int take=0;
//     if(num[ind]<=sum)
//      take=f(ind-1,sum-num[ind],num);

//     return notTake+take;
// }

// MEMOIZATION

int f(int ind, int sum, vector<int> &num, vector<vector<int>> &dp)
{
    if (ind == 0)
    {
        if (sum == 0 && num[0] == 0)
            return 2;
        if (sum == 0 || sum == num[0])
            return 1;
        return 0;
    }

    if (dp[ind][sum] != -1)
        return dp[ind][sum];
    int notTake = f(ind - 1, sum, num, dp);
    int take = 0;
    if (num[ind] <= sum)
        take = f(ind - 1, sum - num[ind], num, dp);

    return dp[ind][sum] = (notTake + take)%mod;
}

int countPartitions(vector<int> &nums, int diff)
{
    // RECURSIVE
    //  int n=nums.size();
    //  return f(n-1,tar,nums);

    // MEMOIZATION

    int toSum = 0;
    for (auto &it : nums)
        toSum += it;
    if (toSum - diff < 0 || (toSum-diff) % 2)
        return 0;
    int tar=(toSum-diff)/2;
    // vector<vector<int>> dp(nums.size(), vector<int>(tar + 1, -1));
    // return f(nums.size() - 1,tar, nums, dp);


    // TABULATION

    vector<vector<int>> dp(nums.size(), vector<int>(tar + 1, 0));
    int n=nums.size();
    if(nums[0]==0) dp[0][0]=2;
    else dp[0][0]=1;
    //num[0]=0;


    // if(nums[0]!=0&&nums[0]<=tar) dp[0][nums[0]]=1;


    // for(int i=1;i<n;i++){
    //     for(int sum=0;sum<=tar;sum++){
    //        int notTake=dp[i-1][sum];
    //        int take=0;
    //        if(nums[i]<=sum)
    //         take=dp[i-1][sum-nums[i]];
    //         dp[i][sum]=(notTake+take)%mod;
    //     }
    // }
    // return dp[n-1][tar];



    // space optimization


    // int n = nums.size();

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
    vector<int> nums = {5, 2, 6, 4};
    cout << countPartitions(nums,3);

    return 0;
}