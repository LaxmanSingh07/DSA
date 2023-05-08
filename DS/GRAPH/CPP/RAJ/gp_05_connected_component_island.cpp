// No of Connected Components in a Graph 
//all the eight directions 


#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:

    void dfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&visited)
    {   
        if(row<0||row>=grid.size()||col<0||col>=grid[0].size()||grid[row][col]==0||visited[row][col]==1)
        {
            return;
        }

        visited[row][col]=1;

        dfs(row-1,col,grid,visited);
        dfs(row+1,col,grid,visited);
        dfs(row,col-1,grid,visited);
        dfs(row,col+1,grid,visited);
        dfs(row-1,col-1,grid,visited);
        dfs(row-1,col+1,grid,visited);
        dfs(row+1,col-1,grid,visited);
        dfs(row+1,col+1,grid,visited);


    }

    void bfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis)
    {
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});

        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            //traverse the eight directions 

            for(int delr=-1;delr<=1;delr++)
            {
                for(int delc=-1;delc<=1;delc++)
                {
                    int nrow=row+delr;
                    int ncol=col+delc;

                    if(nrow>=0 && nrow<grid.size() && col>=0 && col<grid[0].size() && grid[nrow][ncol]==1 && vis[nrow][ncol]==0)
                    {
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }


    int noOfIslands(vector<vector<int>>&grid)
    {

         int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));

        //dfs
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && visited[i][j]==0)
                {
                    dfs(i,j,grid,visited);
                    count++;
                }
            }
        }
        return count;

        //bfs

        vector<vector<int>>visited(n,vector<int>(m,0));
        count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && visited[i][j]==0)
                {
                    count++;
                    dfs(i,j,grid,visited);
                }
            }
        }
        return count;


    }
};

// Time Complexity: O(N*M).
// Space Complexity: O(N*M).