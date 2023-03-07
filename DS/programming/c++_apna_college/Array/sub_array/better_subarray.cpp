// kadane's algorithm 
// maximum subarray sum

// here we take the current_sum as a variable 
// but there is a twist we will regularlly update out current sum


// when current sum is negative we will simple make it zero 

#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    int current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        maxSum=max(maxSum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
cout<<maxSum<<endl;


}