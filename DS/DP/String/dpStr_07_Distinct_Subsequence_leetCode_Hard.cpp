#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    // Recursion
    //  int f(int i, int j, string s, string t)
    //  {
    //      if (j < 0)
    //          return 1;
    //      if (i < 0)
    //          return 0;

    //     if (s[i] == t[j])
    //     {
    //         return f(i - 1, j - 1, s, t) + f(i - 1, j, s, t);
    //     }
    //     return f(i - 1, j, s, t);
    // }

    // Memoization

    // int f(int i, int j, string &s, string &t, vector<vector<int>> &dp)
    // {
    //     if (j < 0)
    //         return 1;
    //     if (i < 0)
    //         return 0;

    //     if (dp[i][j] != -1)

    //         return dp[i][j];

    //     if (s[i] == t[j])
    //     {
    //         return dp[i][j] = f(i - 1, j - 1, s, t, dp) + f(i - 1, j, s, t, dp);
    //     }
    //     return dp[i][j] = f(i - 1, j, s, t, dp);
    // }

    // 1 base indexing in Memoization

    // int f(int i, int j, string &s, string &t, vector<vector<int>> &dp)
    // {
    //     if (j == 0)
    //         return 1;
    //     if (i == 0)
    //         return 0;

    //     if (dp[i][j] != -1)

    //         return dp[i][j];

    //     if (s[i-1] == t[j-1])
    //     {
    //         return dp[i][j] = f(i - 1, j - 1, s, t, dp) + f(i - 1, j, s, t, dp);
    //     }
    //     return dp[i][j] = f(i - 1, j, s, t, dp);
    // }

    // Tabulation 1 base indexing

    /*
        int f(int n, int m, string &s, string &t, vector<vector<int>> &dp)
        {

            // if j is 0 then it doesn't matter what is the value of i, we will always return 1

            // Base case of the Recursion
            for (int i = 0; i <= n; i++)
                dp[i][0] = 1;

            for (int j = 1; j <= m; j++) // j will be from 1 otherwise it will overwrite the value of dp[0][j] which is 0
                dp[0][j] = 0;

            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (s[i - 1] == t[j - 1])
                    {
                        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                    }
                    else
                    {

                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            return dp[n][m];
        }
    */

    // SPACE OPTIMIZED TABULATION

public:
    int numDistinct(string &s, string &t)
    {
        int n = s.size();
        int m = t.size();

        // Recursion
        // return f(n-1,m-1,s,t);

        // Memoization

        // vector<vector<int>> dp(n, vector<int>(m, -1));
        // return f(n - 1, m - 1, s, t, dp);

        // Tabulation

        // vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        // return f(n, m, s, t, dp);

        // // Tabulation Space Optimized

        // vector<int> prev(m + 1, 0),curr(m+1,0);
        // prev[0] = 1;

        // for (int i = 1; i <= n; i++)
        // {
        //     curr[0] = 1;
        //     for (int j = 1; j <= m; j++)
        //     {
        //         if (s[i - 1] == t[j - 1])
        //         {
        //             curr[j] = prev[j - 1] + prev[j];
        //         }
        //         else
        //         {
        //             curr[j] = prev[j];
        //         }
        //     }
        //     prev = curr;
        // }
        // return curr[m];

        // More Space Optimized

        vector<int> prev(m + 1, 0);
        prev[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = m; j >= 1; j--)
            {
                if (s[i - 1] == t[j - 1])
                {
                    prev[j] = prev[j - 1] + prev[j];
                }
                else
                {
                    prev[j] = prev[j];
                }
            }
        }
        return prev[m];
    }
};

int main()
{
    string s = "babgbag";
    string t = "bag";
    Solution obj;
    cout << obj.numDistinct(s, t);
    return 0;
}