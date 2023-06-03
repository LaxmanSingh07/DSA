#include <bits/stdc++.h>
using namespace std;
// Recursive
//  int func (int i,int j1,int j2,int c ,int r,vector<vector<int>>&grid)
//  {
//      if(j1<0||j2<0 || j1>=c||j2>=c) return -1e8;
//      if(i==r-1)
//      {
//          if(j1==j2) return grid[i][j1];
//          else return grid[i][j1]+grid[i][j2];
//      }

//     //explore all 9 options (alice  and bob)
//     int maxi=-1e8;
//     for(int dj1=-1;dj1<=1;dj1++){
//         for(int dj2=-1;dj2<=1;dj2++)
//         {
//             int value=0;
//             if(j1==j2) value=grid[i][j1];
//             else value=grid[i][j1]+grid[i][j2];

//             value+=func(i+1,j1+dj1,j2+dj2,c,r,grid);
//             maxi=max(maxi,value);

//         }
//     }
//     return maxi;
// }

// Memoization

int func(int i, int j1, int j2, int c, int r, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
{
    if (j1 < 0 || j2 < 0 || j1 >= c || j2 >= c)
        return -1e8;
    if (i == r - 1)
    {
        if (j1 == j2)
            return grid[i][j1];
        else
            return grid[i][j1] + grid[i][j2];
    }

    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];

    // explore all 9 options (alice  and bob)
    int maxi = -1e8;
    for (int dj1 = -1; dj1 <= 1; dj1++)
    {
        for (int dj2 = -1; dj2 <= 1; dj2++)
        {
            int value = 0;
            if (j1 == j2)
                value = grid[i][j1];
            else
                value = grid[i][j1] + grid[i][j2];

            value += func(i + 1, j1 + dj1, j2 + dj2, c, r, grid, dp);
            maxi = max(maxi, value);
        }
    }
    return dp[i][j1][j2] = maxi;
}
int maximumChocolates(int row, int col, vector<vector<int>> &grid)
{
    // return func(0,0,col-1,col,row,grid);

    // Memoization

    // dp[r][c][c]
    // vector<vector<vector<int>>>dp(row,vector<vector<int>>(col,vector<int>(col,-1)));

    // Tabulation
    // vector<vector<vector<int>>> dp(row, vector<vector<int>>(col, vector<int>(col, 0)));

    // for (int j1 = 0; j1 < col; j1++)
    // {
    //     for (int j2 = 0; j2 < col; j2++)
    //     {
    //         if (j1 == j2)
    //         {
    //             dp[row - 1][j1][j2] = grid[row - 1][j1];
    //         }
    //         else
    //         {
    //             dp[row - 1][j1][j2] = grid[row - 1][j1] + grid[row - 1][j2];
    //         }
    //     }
    // }

    // for (int i = row - 2; i >= 0; i--)
    // {
    //     for (int j1 = 0; j1 < col; j1++)
    //     {
    //         for (int j2 = 0; j2 < col; j2++)
    //         {
    //             int maxi = -1e8;
    //             for (int dj1 = -1; dj1 <= 1; dj1++)
    //             {
    //                 for (int dj2 = -1; dj2 <= 1; dj2++)
    //                 {
    //                     int value = 0;
    //                     if (j1 == j2)
    //                         value = grid[i][j1];
    //                     else
    //                         value = grid[i][j1] + grid[i][j2];
    //                     if (j1 + dj1 >= 0 && j1 + dj1 < col && j2 + dj2 >= 0 && j2 + dj2 < col)
    //                         value += dp[i + 1][j1 + dj1][j2 + dj2];
    //                     else

    //                         value += -1e8;

    //                     maxi = max(maxi, value);
    //                 }
    //             }
    //         }
    //     }
    // }

    // return dp[0][0][col - 1];

    // Space optimzation

    vector<vector<int>>front(col,vector<int>(col,0)),curr(col,vector<int>(col,0));

    for (int j1 = 0; j1 < col; j1++)
    {
        for (int j2 = 0; j2 < col; j2++)
        {
            if (j1 == j2)
            {
                front[row - 1][j1][j2] = grid[row - 1][j1];
            }
            else
            {
                front[row - 1][j1][j2] = grid[row - 1][j1] + grid[row - 1][j2];
            }
        }
    }

    for (int i = row - 2; i >= 0; i--)
    {
        for (int j1 = 0; j1 < col; j1++)
        {
            for (int j2 = 0; j2 < col; j2++)
            {
                int maxi = -1e8;
                for (int dj1 = -1; dj1 <= 1; dj1++)
                {
                    for (int dj2 = -1; dj2 <= 1; dj2++)
                    {
                        int value = 0;
                        if (j1 == j2)
                            value = grid[i][j1];
                        else
                            value = grid[i][j1] + grid[i][j2];
                        if (j1 + dj1 >= 0 && j1 + dj1 < col && j2 + dj2 >= 0 && j2 + dj2 < col)
                            value += dp[i + 1][j1 + dj1][j2 + dj2];
                        else

                            value += -1e8;

                        maxi = max(maxi, value);
                    }
                }
            }
        }
    }
}

int main()
{
    return 0;
}