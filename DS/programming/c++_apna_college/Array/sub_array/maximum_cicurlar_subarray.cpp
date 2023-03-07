#include<iostream>
#include<climits>
using namespace std;
int kadance( int arr[], int n){
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int wrapsum;
int nonwrapsum;

nonwrapsum=kadance(arr, n);
cout<<nonwrapsum;
int totalsum=0;
for(int i=0;i<n;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];
}
cout<<totalsum;
 
wrapsum=totalsum+kadance(arr,n);
cout<<wrapsum;
cout<<(max(wrapsum,nonwrapsum));
    return 0;
}

// pair sum problem check there exiss two elements in an array such taht thrie sum ins equal to given k 

// #include<iostream>
// using namespace std;
// bool pairsum(int arr[],int n, int k)
// {
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false ;
// }
// int main(){

// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int k;
// cout<<"Enter the required sum";
// cin>>k;

// cout<<pairsum(arr,n,k)<<endl;





//     return 0;
// }
// // #include<iostream>
// // using namespace std;
// // int pairsum(int arr[],int n, int k ){
// //     int low=0,high= n-1;
// //     while (low<high)
// //     {
// //         if(arr[low]+arr[high]==k){
// //             cout<<low<<" "<<high;
// //             return true; 
// //         }
// //         else if (arr[low]+arr[high]>k){
// //             high--;
// //         }
// //         else{
// //             low++;
// //         }
// //     }
// //     return false;
    
// // }
// // int main(){



// // int n;
// // int k;
// // cin>>n;
// // int arr[n];
// // for(int i=0;i<n;i++){
// //     cin>>arr[i];

// // }
// // cin>>k;

// // cout<<pairsum(arr,n,k)<<endl;


// //     return 0;
// // }
