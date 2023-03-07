#include <iostream>
#include <vector>
using namespace std;

void allPath(string p, int r, int c, vector<vector<bool>> maze)
{
    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        cout << p << " ";
        return;
    }
    if (maze[r][c] == false)
    {
        return;
    }

    //I am considering this block in my path 

    maze[r][c]=false;
    if (r < maze.size() - 1)
    {
        allPath(p + 'D', r + 1, c, maze);
    }
    if (c < maze[0].size() - 1)
    {
        allPath(p + 'R', r, c + 1, maze);
    }

    if(r>0){
        allPath(p + 'U', r-1, c, maze);
    }
    if(c>0)
    {
        allPath(p+'L',r,c-1,maze);
    }
    //this line is where the function will be over 

    //so before the functoin gets removed, also remove the cahnge that were made by that functoin 

    maze[r][c]=true;
}

int main()
{
    vector<vector<bool>> board =
        {
            {true, true, true},
            {true, true, true},
            {true, true, true}};
    allPath("", 0, 0, board);
}