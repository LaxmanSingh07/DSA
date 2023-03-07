#include<iostream>
using namespace std;
void input_of_arry(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
bool binary_search(int arr[],int s,int end, int key){
  print(arr, s, end);
    if(s>end){
        return false;
    }
    int mid=s+(end-s)/2;
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]==key){
        return mid;
    }
 
    if(arr[mid]<key){
        return binary_search(arr,mid+1,end,key);
            
    
    }
    return binary_search(arr,s,mid-1,key);

}
int main(){
    int n;
    cin>>n;
    int arr[100];
    input_of_arry(arr,n);

    int key;
    cout<<"Enter the key";
    cin>>key;

   if( binary_search(arr,0,n-1, key))
       cout<<"hn bhai hai";
   
   else{
       cout<<"NOT present";
   }

}