#include<bits/stdc++.h>
using namespace std;

int func (int i,int j1,int j2,int c ,int r,vector<vector<int>>&grid)
{
    if(j1<0||j2<0 || j1>=c||j2>=c) return -1e8;
    if(i==r-1)
    {
        if(j1==j2) return grid[i][j1];
        else return grid[i][j1]+grid[i][j2];
    }

    //explore all 9 options (alice  and bob)
    int maxi=-1e8;
    for(int dj1=-1;dj1<=1;dj1++){
        for(int dj2=-1;dj2<=1;dj2++)
        {
            int value=0;
            if(j1==j2) value=grid[i][j1];
            else value=grid[i][j1]+grid[i][j2];

            value+=func(i+1,j1+dj1,j2+dj2,c,r,grid);
            maxi=max(maxi,value);

        }
    }
    return maxi;
}
int maximumChocolates(int row,int col,vector<vector<int>>&grid){
    return func(0,0,col-1,col,row,grid);
}

int main()
{
    return 0;
}