#include<iostream>
#include<vector>
using namespace std;

//recursion solution 
// int f(int ind,vector<int>&nums)
// {
//     if(ind==0) return nums[ind];
//     if(ind<0)   return 0;
 
//     int pick=nums[ind]+f(ind-2,nums);
//     int notpick=0+f(ind-1,nums);

//     return max(pick,notpick);

// }


//memo 

// int f(int ind,vector<int>&nums,vector<int>&dp)
// {
//     if(ind==0) return nums[ind];
//     if(ind<0)   return 0;
 
//  if(dp[ind]!=-1){
//     return dp[ind];
//  }
//     int pick=nums[ind]+f(ind-2,nums,dp);
//     int notpick=0+f(ind-1,nums,dp);

//     return max(pick,notpick);

// }



//Tabulation 

// int f(int n,vector<int>&nums,vector<int>&dp)
// {
//     dp[0]=nums[0];
//     int neg=0;

//     for(int i=1;i<=n;i++)
//     {
//         int pick=nums[i]+((i>1)?dp[i-2]:neg);
//         int notpick=0+dp[i-1];
//         dp[i]=max(pick,notpick);
//     }

//    return dp[n];

// }


//Space optimization 



int maximumNonAdjacentSum(vector<int>&nums)
{
    int n=nums.size();
    //recursion
    // return f(n-1,nums);

    //memo
    // vector<int>dp(n,-1);
    // return f(n-1,nums,dp);


    //space optimization 

    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++)
    {
        int take=nums[i]+((i>1)?prev2:0);
        int notTake=0+prev;
        int curri=max(take,notTake);
        prev2=prev;
        prev=curri;
    }
    return prev;

}

int main()
{
    vector<int>v={2,1,4,9};
    cout<<maximumNonAdjacentSum(v);

}