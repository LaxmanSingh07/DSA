#include <bits/stdc++.h>
using namespace std;

// Recursion

// int f(int i, int j, string &s1, string &s2)
// {
//     if (i < 0)
//     {
//         return j + 1;
//     }
//     if (j < 0)
//     {
//         return i + 1;
//     }

//     if (s1[i] == s2[j])
//     {
//         return f(i - 1, j - 1, s1, s2);
//     }
//     else
//     {
//         return 1 + min(f(i - 1, j, s1, s2), min(f(i, j - 1, s1, s2), f(i - 1, j - 1, s1, s2)));
//     }
// }

// Memoization

// int f(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
// {
//     if (i < 0)
//     {
//         return j + 1;
//     }
//     if (j < 0)
//     {
//         return i + 1;
//     }
//     if(dp[i][j]!=-1)
//         return dp[i][j];

//     if (s1[i] == s2[j])
//     {
//         return dp[i][j]=f(i - 1, j - 1, s1, s2, dp);
//     }
//     else
//     {
//         return dp[i][j]=1 + min(f(i - 1, j, s1, s2, dp), min(f(i, j - 1, s1, s2, dp), f(i - 1, j - 1, s1, s2, dp)));
//     }
// }

// Memoization 1 base indexing

// int f(int i, int j, string &s1, string &s2, vector<vector<int>> &dp)
// {
//     if (i == 0)
//     {
//         return j;
//     }
//     if (j == 0)
//     {
//         return i;
//     }
//     if(dp[i][j]!=-1)
//         return dp[i][j];

//     if (s1[i-1] == s2[j-1])
//     {
//         return dp[i][j]=f(i - 1, j - 1, s1, s2, dp);
//     }
//     else
//     {
//         return dp[i][j]=1 + min(f(i - 1, j, s1, s2, dp), min(f(i, j - 1, s1, s2, dp), f(i - 1, j - 1, s1, s2, dp)));
//     }
// }

// Tabulation

// int f(int n, int m, string &s1, string &s2, vector<vector<int>> &dp)
// {

//     for (int i = 0; i <= n; i++)
//     {
//         dp[i][0] = i;
//     }
//     for (int j = 0; j <= m; j++)
//     {
//         dp[0][j] = j;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (s1[i-1] == s2[j-1])
//             {
//                  dp[i][j] = dp[i - 1][ j - 1];
//             }
//             else
//             {
//                 dp[i][j] = 1 + min((dp[i - 1][j]), min((dp[i][ j - 1]), dp[i - 1][ j - 1]));
//             }
//         }
//     }
//     return dp[n][m];
// }

// Space Optimized Tabulation

int f(int n, int m, string &s1, string &s2)
{

    vector<int> prev(m + 1, 0), curr(m + 1, 0);

    for (int j = 0; j <= m; j++)
        prev[j] = j;

    for (int i = 1; i <= n; i++)
    {
        curr[0] = i;
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                curr[j] = prev[j - 1];
            }
            else
            {
                curr[j] = 1 + min(prev[j], min(curr[j - 1], prev[j - 1]));
            }
        }
        prev = curr;
    }
    return curr[m];
}

int editDistance(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();

    // Recursion
    // return f(n - 1, m - 1, str1, str2);

    // Memoization

    // // 0 base indexing
    // vector<vector<int>> dp(n, vector<int>(m, -1));
    // // 1 base indexing
    // vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    // return f(n - 1, m - 1, str1, str2, dp);

    // Tabulation

    // vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // return f(n, m, str1, str2, dp);

    // Space Optimized Tabulation

    return f(n, m, str1, str2);
}

int main()
{

    string s1 = "sunday";
    string s2 = "saturday";

    cout << "minimum operation required will be : " << editDistance(s1, s2);
    return 0;
}