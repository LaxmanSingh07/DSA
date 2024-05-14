#include<iostream>
#include<vector>
using namespace std;

class Solution{

    public: 
    // Recursion 
    int recuDistinctWays(int indx){
        if(indx==0) return 1;
        int oneStep=recuDistinctWays(indx-1);
        int twoStep=0;
        if(indx>1)
        twoStep=recuDistinctWays(indx-2);
        return oneStep+twoStep;
    }

    // memoization 

    int memoDistinctWays(vector<int>&dp,int indx){
        if(indx==0) return 1;
        if(dp[indx]!=-1) return dp[indx];

        int onStep=memoDistinctWays(dp,indx-1);
        int twoStep=0;

        if(indx>1)
        twoStep=memoDistinctWays(dp,indx-2);

        return dp[indx]=onStep+twoStep;
    }

    // tabulation 

    int tabuDistinctWays(int n){
        vector<int>dp(n+1,0);
        dp[0]=1; // base case 
        for(int i=1;i<=n;i++){
            int oneStep=dp[i-1];
            int twoStep=0;
            if(i>1)
            twoStep=dp[i-2];
            dp[i]=oneStep+twoStep;
        }
        return dp[n];
    } 

    // space optimization 

    int spaceOptDistinctWays(int n){
        int prev2=1;
        int prev1=1;
        for(int i=2;i<=n;i++){
            int cur=prev1+prev2;
            prev2=prev1;
            prev1=cur;
        }
        return prev1;
    }


};
int main()
{
    int n;
    cin>>n;
    Solution obj(n);

    cout<<obj.recuDistinctWays(n);


    return 0;
}