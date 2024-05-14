//it is not the best time complexity all though
//it is used only to understand 
//we can find the nth fino in log(n) time 


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

    
    // tabulation  

    vector<int>dp(n+1,0);

    dp[0]=0,dp[1]=1; // same as base case 

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]; // same as recursive 
    }
    cout<<dp[n]<<endl;


    // space complexity 

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