#include <bits/stdc++.h>
using namespace std;

/*
    celebrity problem
    no of person who know me should be n-1
    and no person i know 0

    - Naive approach

    declare two array

        - knowMe Array
        - Iknow array

    and start traversing the entire grid

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(grid[i][j]==1){
                    knowMe[j]++;
                    Iknow[i]++;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        if(knowMe[i]==n-1 && Iknow[i]==0){
            return i;
        }
    }

    - minimum no of celebrity in the problem could be 0
    and maximum could be 1

    - Optimized approach

    - i do have celebrity one of out of 0 to n-1


    take two pointer (top and end) top will point to the 0th index and end will point to the n-1 index

    if grid[top][end]==1 then top is not a celebrity but if
    grid[top][end]==0 then end is not a celebrity

    int top=0,end=n-1;

    while(top<end){
        if(grid[top][end]==1){
            top++;
        }else if(grid[end][top]==1){
            end--;

        }
    else{
    // that is neither of them one another but one show the other
        top++;
        end--;
    }
    }

    // at the end

    if(top>down) return -1 // no celebrity

    for(int i=0;i<n;i++){
        if(i!=top &&(mat[top][i]!=0 || mat[i][top]!=1)){
            return -1;
        }
    }

*/

int main()
{
    int n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
}