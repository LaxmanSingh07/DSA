#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    
long long int arr[INT_MAX];
   
for(long long int t=0;t<INT_MAX;t++){
	arr[t]=t;
}
arr[INT_MAX-1]=45;
   
   int key=45;
//    cout<<"Enter the element you want to find";
//    cin>>key;

long long  int i=0;
long long int j=INT_MAX-1;
    while (i<=j)
    {
       long long int mid=(i+j)/2;

        if(arr[mid]==key){
            cout<<"No is present";
            break;

        }
        if(arr[mid]>key){
            j=mid-1;
        }
        else
            i=mid+1;
    }
    if(i>j+1){
        printf("element is not present ");
    }

    return 0;
    
}
