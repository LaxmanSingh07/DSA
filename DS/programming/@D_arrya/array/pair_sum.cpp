// wap to find the pair which sum is equal to a number;

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements ";
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    printf("Entered the sum");
    cin>>s;
    for(int i=0;i<n-1;i++){
        {
            for(int j=i+1;j<n-1;j++){
                cout<<arr[i]+arr[j];
                if(arr[i]+arr[j]==s){
                    cout<<i<<j;
                }
            }
        }
    }

    return 0;
}