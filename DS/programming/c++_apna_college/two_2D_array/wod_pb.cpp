// given a squre matrix and we har it's main diagonal, switching th ve to find the transpose of theat matrix

// The transpose of a matrix is the matrix fliped over it's main diagonal , switching the row and column indices f of the matrix 


// constraints 
// 1<=N<=1000

// the basis indea for this pb i (row,col) <=> (col,row)
// #include<iostream>


// using namespace std
// int main(){
// int n;
// cin>>n;
// int arr[n][n];
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cin>>arr[i][j];
//     }
// }

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         //swap
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i]     ;   
//             arr[j][i]=temp;
       
       
//     }
// }


// //print
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// // auto end =chrono::steady_clock::now();
// // auto diff =end -start;
// // cout<<chromo:: duration<double, milli>(diff).count() << " ms "<<endl;
//     return 0;
// }


// matrix multiplication 

// no_of_column= no_of_rows --> this is a required condtion
// #include<iostream>
// using namespace std;
// int main(){
// int n1,n2,n3;
// cin>>n1>>n2>>n3;

// int m1[n1][n2];
// int m2[n2][n3];

// for(int i=0;i<n1;i++){
//     for(int j=0;j<n2;j++){
//         cin>> m1[i][j];
//     }
// }
// for(int i=0;i<n2;i++){
//     for(int j=0;j<n3;j++){
//         cin>> m2[i][j];
//     }
// }

// int ans[n1][n3];
// for(int i=0;i<n2;i++){
//     for(int j=0;j<n3;j++){
//         ans[i][j]=0;
//     }
// }

// for(int i=0;i<n1;i++){
//     for(int j=0;j<n3;j++){
//         for(int k=0;k<n2;k++){
//             ans[i][j]+=m1[i][k]*m2[k][j];
//         }
//     }
// }

// for(int i=0;i<n1;i++){
//     for(int j=0;j<n3;j++)
//         cout<<ans[i][j]<<" ";
//     cout<<endl;
// }
//     return 0;
// }



// matrix search 

// 2d matrix search

// write an algo to find the elemtent in a shorted matrix

// linear search O(m){n}
// can we do better!

//  14 7 11
//  2 5 8 12 
//  3 6 9 16 
//  10 13 14 17


// here is the algo of that problem

// idea 
// start form top right element 

// you are at (r,c)

//  if (matrix[r][c]==target)
//     return true ;

//     if(matrix[r][c]>target ){
//         c--;
//     }

//     else 
//         r++;

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat [n][m];
    int found=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> mat[i][j];
        }
    }
    int target;
    cin>>target;
   
    int r=0, c=m-1;
    while (r<c &&c>0)
    {
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found ";
    }
    else {
         cout<<"Element not found ";
    }
    


    return 0;
}