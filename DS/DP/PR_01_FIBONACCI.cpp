#include<iostream>
#include<vector>
using namespace std;

// void memset(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=-1;
//     }
// }

int f(int n,vector<int>&dp)
{
    if(n<=1)    return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    // int dp[n+1];
    // memset(dp,sizeof(dp));
    // vector<int > dp(n+1,-1);
    // cout<<f(n,dp);
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++)
    {
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
    return 0;
}