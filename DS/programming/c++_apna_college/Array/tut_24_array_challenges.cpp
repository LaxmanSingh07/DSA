// given an array arr[] of size N. the task is to find the first repeating elemtn in the array of integers, ie.e., and element that occurs more than once and wohose index of first occurrence is samllest .

// constraints:
// 1<=N<=10^6
// 0<=Ai<=10^6

// to check if a elment is repeating. we maintain an rray index 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     const int N=78; // 10^6
//     int idx[N];
//     // idx[N]={-1};
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }

//     int minidx =INT_MAX;

//     for(int i=0;i<n;i++){
//         if(idx[arr[i]] !=-1){
//             minidx=min(minidx,idx[arr[i]]);
//         }
//         else{
//             idx[arr[i]]=i;
//         }
//     }

//     if(minidx == INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx<<endl;
//     }

//     return 0;
// }


// given a nusorted array A OF SIZE n of non-negative interger, find a contiousou sybarrat which adds to a given number S.



// Constraints:

// 1<=N<=10^3
// 0<=Ai<=10^10

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int currsum=0;
for(int i=0;i<n;i++){
    currsum=0;
    for(int j=i;j<n;j++){
        currsum+=arr[j];
    }
}
return 0;
}
 int currsum=0;

//     for(int i=0;i<n;i++){
//         currsum=0;
//         for(int j=i;j<n;j++){
//             currsum+=arr[j];
//             cout<<currsum<<endl;

//         }