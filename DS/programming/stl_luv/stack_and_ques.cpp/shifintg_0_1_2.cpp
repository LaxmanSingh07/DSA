#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
           long long int s=0;
long long     int mid=0;
    long long int end=n-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[s],arr[mid]);
            mid++;
            s++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
        if(arr[mid]==1){
            mid++;
            
        }
}
int cnt=0;
for(int i=0;i<n;i++){
cnt++;
    cout<<arr[i];
}
cout<<cnt;
}