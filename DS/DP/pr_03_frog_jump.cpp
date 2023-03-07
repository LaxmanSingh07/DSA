// #include<iostream>
// #include<vector>
// #include<climits>
#include<bits/stdc++.h>
using namespace std;

//SIMPLE RECURSION
// int f(int ind,vector<int> &heights)
// {
//     if(ind==0){return 0;}
//     int left=f(ind-1,heights)+abs(heights[ind]-heights[ind-1]);
//     int right=INT_MAX;

//     if(ind>1){
//         right=f(ind-2,heights)+abs(heights[ind]-heights[ind-2]);
//     }
//     return min(left,right);

// }

//MEMO 

//ALWAYS SEE THAT PARAMETER WHICH IS CHANGING 

// int f(int ind,vector<int> &heights,vector<int> &dp)
// {
//     if(ind==0){
//         return 0;
//     }
//     if(dp[ind]!=-1)
//     {
//         return dp[ind];
//     }
//     int left=f(ind-1,heights,dp)+abs(heights[ind]-heights[ind-1]);;
//     int right=INT_MAX;
//     if(ind>1)
//     right=f(ind-2,heights,dp)+abs(heights[ind]-heights[ind-2]);
//     return dp[ind]=min(left,right);
// }


// int f(int n,vector<int> &heights,vector<int> &dp)
// {
//     dp[0]=0;

//     for(int i=1;i<n;i++)
//     {
//         int fs=dp[i-1]+abs(heights[i]-heights[i-1]);
//         int ss=INT_MAX;
//         if(i>1){
//             ss=dp[i-2]+abs(heights[i]-heights[i-2]);
//         }
//         dp[i]=min(fs,ss);
//     }
//     return dp[n];
// }


//space optimization 



int frogJump(int n,vector<int> &heights)
{
    // return f(n-1,heights);
    //memo
    // vector<int> dp(n,0);
    // return f(n,heights,dp);

    //space optimization 

    int prev=0;
    int prev2=0;

    for(int i=1;i<n;i++)
    {
        int fs=prev+abs(heights[i]-heights[i-1]);
        int ss=INT_MAX;
        if(i>1){
            ss=prev2+abs(heights[i]-heights[i-2]);
        }
        int curri=min(fs,ss);
        prev2=prev;
        prev=curri;
    }
    return prev;
}
int main()
{
    vector<int> heights={7,4,4,2,6,6,3,4};
    cout<<frogJump(8,heights)<<endl;;

    return 0;
}