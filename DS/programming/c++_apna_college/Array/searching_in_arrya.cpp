// it is the approach which is known as the linear search 
// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int n, int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;

//     cout<<linearSearch(arr,n,key);




// }


// therer is another mehtod of searching which is known as binary search
// but your input should be in increading order 

#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid =(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int t=binarysearch(arr,n,key);
    printf("%d",t);



}