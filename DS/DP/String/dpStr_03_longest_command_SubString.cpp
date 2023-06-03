#include <bits\stdc++.h>
using namespace std;

int lcs(string &s, string &t)
{

    int m = t.size();
    int n = s.size();

    // Tabulation

    // I am using it by shifting the index right by one

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    for (int j = 0; j <= m; j++)
        dp[0][j] = 0;

    for (int i = 0; i < n; i++)
        dp[i][0] = 0;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1]){
               dp[i][j] = 1 + dp[i - 1][j - 1];
               ans=max(ans,dp[i][j]);
            }
            

            else
                dp[i][j] = 0;
        }
    }

   return ans; 
}
int main()
{

    string source = "Laxman";
    string target = "Laxm44";
    cout << "Longest comman subString  is " << lcs(source, target);
    return 0;
}