//  subarray is a contiguois part of an array 


// 1. wap to print the all sub array of a given array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//             cout<<arr[k]<<" ";
//         }cout<<endl;
//             }
        
//     }



//     return  0;
// }

// maixmum subarray sum;

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int array[n];
// for(int i=0;i<n;i++){
//     cin>>array[i];
// }
// int Maxsum=INT_MIN;


// for(int i=0;i<n;i++){
// for(int j=i;j<n;j++){
//       int sum=0;
//         for(int k=i;k<=j;k++){
//             sum+=array[k];
            

//         }
//         Maxsum=max(Maxsum,sum);
        
//     }
// }

// cout<<Maxsum<<endl;


//     return 0;
// }


// the approach which we have use earlier is very time consuming 

// let's do a good onexi


// #include<iostream>
// #
// #include "bits/stdc++.h"
// #include<iostream>
// #include<climits>
// #include<bits/stdc++.h>


// using namespace std;
// int main(){

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// int currsum[n+1];
// currsum[0]=0;
// for(int i=1;i<=n;i++){
//     currsum[i]=currsum[i-1] + arr[i-1];
// }

//  int maxsum=INT_MIN;
//  for(int i=1;i<=n;i++){
//      int sum=0;
//      for(int j=0;j<i;j++){
//          sum = currsum[i]+currsum[j];
//          maxsum=max(sum,maxsum);
//      }

//  }
//  cout<<maxsum;
//     return 0;
// }

// maximum subarray Su m
// Kedane's Algorithm 

 
#include<iostream>
#include<climits>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int currentsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    currentsum+=arr[i];
    if(currentsum<0){
        currentsum=0;
    }
    maxsum=max(maxsum,currentsum);
}
cout<<maxsum;


    return 0;
}