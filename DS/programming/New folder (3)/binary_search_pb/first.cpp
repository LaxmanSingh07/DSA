#include<iostream>
int binary_search(int arr[],int size,int key){
    int start=0;
    int end =size-1;

    while(start<=start){
    int mid=(start+end)/2;
    // start+(end-start)/2
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }

            else
            start=mid+1;
    }
    return 1;

}
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};
int key;
cin>>key;
int index=binary_search(arr,5,key);
cout<<"index of" <<key<< "is at "<<index;

    return 0;
}