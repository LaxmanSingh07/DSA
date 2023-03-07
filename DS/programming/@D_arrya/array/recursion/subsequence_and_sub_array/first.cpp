#include<iostream>
#include<cmath>
using namespace std;

void power_set(int arr[],int n,int output[],int index){
if(index>=n){
    output[index]=arr[index];
    }
 // exclude

 power_set(arr,n,output,index+1);

 // include

 int element= arr[index];
 output[index]=element;
power_set(arr,n,output,index+1);

}
    

int main(){

int n;
cin>>n;

int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int t=pow(2,n);
int output[t]={0};

power_set(arr,n,output,0);

for(int i=0;i<pow(2,n);i++){
    printf("%d",output[i]);
}

    return 0;
}