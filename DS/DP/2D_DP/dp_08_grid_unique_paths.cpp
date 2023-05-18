#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    // Recursive

    /*
    int find_path(int i,int j)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;

        int up = find_path(i-1,j);
        int left = find_path(i,j-1);

        return up+left;
    }

    */

    // Memoization

    /*

     int find_path(int i, int j, vector<vector<int>> &dp)
     {
         if (i == 0 && j == 0)
             return 1;
         if (i < 0 || j < 0)
             return 0;
         if (dp[i][j] != -1)
             return dp[i][j];

         int up = find_path(i - 1, j, dp);
         int left = find_path(i, j - 1, dp);

         return dp[i][j] = up + left;
     }
     */

    int countWays(int m, int n)
    {

        // Memoization

        /*
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return find_path(m - 1, n - 1, dp);

        */

        // Tabulation

        /*
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                    dp[0][0] = 1;
                else
                {
                    int up = (i > 0) ? dp[i - 1][j] : 0;
                    int left = (j > 0) ? dp[i][j - 1] : 0;
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m - 1][n - 1];

        */



        // Space Optimized

        vector<int>prev(n,0);

        for(int i=0;i<m;i++)
        {
            vector<int>curr(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0 ) curr[j]=1;
                else{
                    int up = (i>0)?prev[j]:0;
                    int left = (j>0)?curr[j-1]:0;
                    curr[j] = up+left;
                }
            }
            prev = curr;
        }

        return prev[n-1];

    }
}


int
}
;

int main()
{

    int m = 3;
    int n = 2;

    cout << countWays(m, n);
}