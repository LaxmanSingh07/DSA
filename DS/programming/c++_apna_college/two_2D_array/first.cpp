/*#include<iostream>
using namespace std;

int main(){
int n,m;
cout<<"Enter the no of row and no co column";
cin>>n>>m;
int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
}


    return 0;
}*/


// searching a matrix 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int x;
//     cout<<"Enter the which you want to find out ";
//     cin>>x;

//     bool flag =false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==x){
//                 cout<<"element is found\n"<<"at index"<<i<<" "<<j;
//                 flag=true;
//             }
//         }
//     }
//     if(flag){
//         cout<<"found ";
//     }
//     else{
//         cout<<"Not found ";
//     }

//     return  0;
// }


// spiral order matrix traversal

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
        }
    }
    int row_start=0;
    int row_end=n-1;
    int column_start =0;
    int column_end= m-1;

    while(row_start<=row_end&& column_start<=column_end){
        // for row start 

        for(int col=column_start; col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;



        //for row end 
    for(int col=column_end;col>=column_start;col--){
        cout<<arr[row_end][col];
    }
    
    row_end--;
    //for last column
    for(int row= row_end; row>=row_start;row--){
        cout<<arr[row][column_start];
    }
    }
    column_start++;
}



