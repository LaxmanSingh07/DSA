#include<iostream>
using namespace std;

int main(){
int arr[3][4];

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

for(int col=0;col<4;col++){
    if(col&1){
        //odd index --> bottom to top

        for(int row=3-1;row>=0;row--){
            cout<<arr[row][col]<<" ";
        }
    }
    else{

        // 0 ore evne index --> top to bottom
        for(int row=0;row<3;row++){
            cout<<arr[row][col];


        }
    }
}

    return 0;
}