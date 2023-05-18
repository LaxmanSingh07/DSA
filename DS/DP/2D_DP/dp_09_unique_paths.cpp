#include <bits/stdc++.h>

using namespace std;
// Recursive

/*
int mazeObstaclesUnit(int i ,int j,vector<vector<int>>&maze)
{
    if(i>0 && j>0 && maze[i][j]==-1)
        return 0;
    if(i==0 && j==0)
        return 1;
    if(i<0 || j<0)
        return 0;
    int up=mazeObstaclesUnit(i-1,j,maze);
    int left=mazeObstaclesUnit(i,j-1,maze);

    return up+left;
}

*/

// Memoization

/*
int mazeObstaclesUtil(int i, int j, vector<vector<int> > &maze, vector<vector<int> >
&dp) {
  if(i>0 && j>0 && maze[i][j]==-1) return 0;
  if(i==0 && j == 0)
    return 1;
  if(i<0 || j<0)
    return 0;
  if(dp[i][j]!=-1) return dp[i][j];

  int up = mazeObstaclesUtil(i-1,j,maze,dp);
  int left = mazeObstaclesUtil(i,j-1,maze,dp);

  return dp[i][j] = up+left;

}

*/

// Tabulation

/*
int mazeObstacles(int n, int m, vector<vector<int> > &maze){

   vector<vector<int> > dp(n,vector<int>(m,-1));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maze[i][j] == -1) dp[i][j]=0;
            else{
                int up=0,left=0;
                if(i>0) up=dp[i-1][j];
                if(j>0) left=dp[i][j-1];
                dp[i][j]=up+left;
            }
        }
    }
    return dp[n-1][m-1];

}

*/

// space optimized

int mazeObstaclesUtil(int n, int m, vector<vector<int>> &maze)
{

    vector<int> prev(m, 0);
    prev[0] = 1;
    for (int i = 0; i < n; i++)
    {
        vector<int> curr(m, 0);
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == -1)
                curr[j] = 0;
            else
            {
                int up = 0, left = 0;
                if (i > 0)
                    up = prev[j];
                if (j > 0)
                    left = curr[j - 1];
                curr[j] = up + left;
            }
        }
        prev = curr;
    }
    return prev[m - 1];
}

int mazeObstacles(int n, int m, vector<vector<int>> &maze)
{
    vector<vector<int>> dp(n, vector<int>(m, -1));
    // return mazeObstaclesUtil(n-1,m-1,maze,dp);
}

int main()
{

    vector<vector<int>> maze{{0, 0, 0},
                             {0, -1, 0},
                             {0, 0, 0}};

    int n = maze.size();
    int m = maze[0].size();

    cout << mazeObstacles(n, m, maze);
}