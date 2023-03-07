#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[1000];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int sum=0;
cout<<"Enter the requred sum";
cin>>sum;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;j<n-1;j++){
            if(sum==arr[i]+arr[j]+arr[k]){
                printf("%d %d %d",i,j,k);
            }

        }
    }
}
    return 0;
}