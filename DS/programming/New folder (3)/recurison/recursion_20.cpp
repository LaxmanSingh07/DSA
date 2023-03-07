// count the no of paths possbile in a maze
#include<iostream>
using namespace std;

int countPaathMaze(int n, int i, int j){

    if(i==n-1&&j==n-1){
        return 1;
    }
    if(i>=n||j>=n){
        return 0;
    }

    return countPaathMaze(n, i+1, j)+countPaathMaze(n,i,j+1);
}
int main(){

cout<<countPaathMaze(3,0,0)<<endl;
    return 0;
}