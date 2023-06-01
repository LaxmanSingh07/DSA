#include <bits/stdc++.h>
using namespace std;

// Recursive

// int findMinSumPath(int i,int j,vector<vector<int>>&grid)
// {
//     if(i==0 && j==0)
//         return grid[i][j];
//     if(i<0 || j<0)
//         return INT_MAX;
//     int up=grid[i][j]+findMinSumPath(i-1,j,grid);
//     int left=grid[i][j]+findMinSumPath(i,j-1,grid);
//     return min(up,left);
// }

// Memoization

int findMinSumPath(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i == 0 && j == 0)
        return grid[i][j];
    if (i < 0 || j < 0)
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    int up = grid[i][j] + findMinSumPath(i - 1, j, grid, dp);
    int left = grid[i][j] + findMinSumPath(i, j - 1, grid, dp);
    return dp[i][j] = min(up, left);
}
int minSumPath(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    // Recursive
    //  return (n-1,m-1,grid);

    // Memoization

    // vector<vector<int>> dp(n, vector<int>(m, -1));

    // Tabulation

    // vector<vector<int>> dp(n, vector<int>(m, 0));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(i==0 &&j==0 )dp[i][j]=grid[i][j];
    //         else{
    //             int up=grid[i][j];
    //             if(i>0)
    //             up+=dp[i-1][j];
    //             else up+=INT_MAX;
    //             int left=grid[i][j];
    //             if(j>0){
    //                 left+=dp[i][j-1];
    //             }
    //             else left+=INT_MAX;
    //             dp[i][j]=min(up,left);

    //         }
    //     }
    // }

    // return dp[n - 1][m - 1];


    // Space Optimized Tabulation 

    vector<int> prev(m,0);

    for(int i=1;i<m;i++)
    {
       vector<int> curr(m,0);
       for(int j=0;j<m;j++)
       {
        if(i==0 && j==0 )curr[j]=grid[i][j];
        else{
            int up=grid[i][j];
            if(i>0)
            up+=prev[j];
            else up+=INT_MAX;
            int left=grid[i][j];
            if(j>0){
                left+=curr[j-1];
            }
            else left+=INT_MAX;
            curr[j]=min(up,left);

        }
       }
       prev=curr;
    }

    return prev[m-1];
}

int main()
{

    return 0;
}