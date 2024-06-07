#include <bits/stdc++.h>
using namespace std;

// recursive

// int fn(int i,int j,vector<vector<int>>&grid)
// {
//     if(i<0||j>=grid[0].size()) return -1e9;
//     if(i==0 ) return grid[i][j];

//     int up=grid[i][j]+fn(i-1,j,grid);
//     int leftD=grid[i][j]+fn(i-1,j-1,grid);
//     int rightD=grid[i][j]+fn(i-1,j+1,grid);

//     return max(up,max(leftD,rightD));
// }

// Memoization

int fn(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i < 0 || j >= grid[0].size())
        return -1e9;
    if (i == 0)
        return grid[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];
    int up = grid[i][j] + fn(i - 1, j, grid, dp);
    int leftD = grid[i][j] + fn(i - 1, j - 1, grid, dp);
    int rightD = grid[i][j] + fn(i - 1, j + 1, grid, dp);

    return dp[i][j] = max(up, max(leftD, rightD));
}

// Tabulation

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int maxi = -1e9;

    // Recursive
    /* for(int j=0;j<m;j++)
     {
         maxi=max(maxi,fn(n-1,j,matrix)
     }

     */

    // Memoization

    // vector<vector<int>>dp(n,vector<int>(m,-1));

    // for(int j=0;j<m;j++)
    // {
    //     maxi=max(maxi,fn(n-1,j,matrix,dp));
    // }

    // return maxi;

    // Tabulation

    // vector<vector<int>>dp(n,vector<int>(m,0));

    // for(int i=0;i<m;i++) dp[0][i]=matrix[0][i];

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         int up=matrix[i][j]+dp[i-1][j];

    //         int leftD=matrix[i][j];
    //         leftD+=((j-1>=0)?dp[i-1][j-1]:-1e8);
    //         int rightD=matrix[i][j];
    //         rightD+=((j+1<m)?dp[i-1][j+1]:-1e8);
    //         dp[i][j]=max(up,max(leftD,rightD));
    //     }
    // }

    // for(int i=0;i<m;i++) maxi=max(maxi,dp[n-1][i]);
    // return maxi;

    // Space Optimized

    vector<int> prev(m, 0), curr(m, 0);

    for (int i = 0; i < m; i++)
        prev[i] = matrix[0][i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                
                int up = matrix[i][j] + prev[j];
    
                int leftD = matrix[i][j];
                leftD += ((j - 1 >= 0) ? prev[j - 1] : -1e8);
                int rightD = matrix[i][j];
                rightD += ((j + 1 < m) ? prev[j + 1] : -1e8);
                curr[j] = max(up, max(leftD, rightD));
        }
        prev=curr;
    }

    for (int i = 0; i < m; i++)
        maxi = max(maxi, prev[i]);
    return maxi;
}

int main()
{
    return 0;
}