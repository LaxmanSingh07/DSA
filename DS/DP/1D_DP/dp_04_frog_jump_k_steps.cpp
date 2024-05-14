#include<bits/stdc++.h>
using namespace std;

int findKJumps(vector<int>&heights,int k,int indx)
{
    if(indx==0) return 0;
    int ans=INT_MAX;
    for(int i=1;i<=k;i++){
        if(indx-i>=0)
            ans=min(ans,findKJumps(heights,k,indx-i)+abs(heights[indx]-heights[indx-i]));
    }
    return ans;
} // tc: O(k*n) sc: O(n)

int memoFindKJumps(vector<int>&heights,vector<int>&dp,int k,int indx){
    if(indx==0) return 0;
    if(dp[indx]!=-1) return dp[indx];

    int ans=INT_MAX;
    for(int i=1;i<=k;i++)
        if(indx-i>=0)
            ans=min(ans,memoFindKJumps(heights,dp,k,indx-i)+abs(heights[indx]-heights[indx-i]));
    
    return dp[indx]=ans;
}


// tabulation 

int tabuFindKJumps(vector<int>&heights,int k){
    int n=heights.size();
    vector<int> dp(n,INT_MAX);

    dp[0]=0;

    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]=min(dp[i],dp[i-j]+abs(heights[i]-heights[i-j]));
            }
        }
    }

    return dp[n-1];
}


// we can't space optimize this as we need to access previous k elements (k<=n) to calculate current element


int main()
{
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }

    cout<<findKJumps(heights,2,n-1)<<endl;
    
    return 0;
}