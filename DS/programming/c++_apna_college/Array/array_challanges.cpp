// max till i problem

// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx =INT_MIN;
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//         cout<<mx<<" ";
//         cout<<endl;

//     }


//     return  0;
// }


// sum of all subArrays 



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int currsum=0;

//     for(int i=0;i<n;i++){
//         currsum=0;
//         for(int j=i;j<n;j++){
//             currsum+=arr[j];
//             cout<<currsum<<endl;

//         }

//     }
    

//     return 0;

// }

// longest Arithematic Subarray --> Kick start 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// int ans=2;// this is because the minimum length of the airthemtic subarray is 2
// int pd=arr[1]-arr[0];
// int j=2;
// int current =2;
// while (j<n)
// {
//     if(pd==arr[j]-arr[j-1]){
//         current++;
//     }
//     else{
//         pd=arr[j]-arr[j-1];
//         current=2;
//     }
//     ans=max(ans,current);


//     j++;
// }
//     cout<<ans;

// }



// Record Breaker -- kick start 

// #include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>mx &&arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<ans<<endl;

    
}

