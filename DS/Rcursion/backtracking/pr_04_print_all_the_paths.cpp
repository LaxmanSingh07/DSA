#include <iostream>
#include <vector>
using namespace std;

void allPathPrint(string p, int r, int c, vector<vector<bool>> maze,vector<vector<int>>path,int step)
{
    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        for(auto it:path)
        {
            // cout<<to_string(path);
            for(int j=0;j<)
        }
    }
    if (maze[r][c] == false)
    {
        return;
    }

    //I am considering this block in my path 

    maze[r][c]=false;
    path[r][c]=step;
    if (r < maze.size() - 1)
    {
        allPathPrint(p + 'D', r + 1, c, maze,path,step+1);
    }
    if (c < maze[0].size() - 1)
    {
        allPathPrint(p + 'R', r, c + 1, maze,path,step+1);
    }

    if(r>0){
        allPathPrint(p + 'U', r-1, c, maze,path,step+1);
    }
    if(c>0)
    {
        allPathPrint(p+'L',r,c-1,maze,path,step+1);
    }
    //this line is where the function will be over 

    //so before the functoin gets removed, also remove the cahnge that were made by that functoin 

    maze[r][c]=true;
    maze[r][c]=0;
}

int main()
{
    vector<vector<bool>> board =
        {
            {true, true, true},
            {true, true, true},
            {true, true, true}};
    vector<vector<int>>path;
    allPathPrint("", 0, 0, board,path,0);
}