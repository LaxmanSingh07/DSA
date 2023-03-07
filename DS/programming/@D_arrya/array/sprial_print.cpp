#include<iostream>
#include<vector>
using namespace std;
int main(){

int n,m;

cout<<"Enter the no of rows and the columns ";
cin>>n>>m;
int arr[n][m];
int count=0;
int total=n*m;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
vector<int> ans;

int startingRow=0;
int endingRow=0;
int startingCol=0;
int endingcol=0;
while (count<total)
{   
    /*striting row */
    for(int index=startingRow;index<endingcol){
        ans.push_back(matrix[startingRow]),ro
    }
}


return 0;
}