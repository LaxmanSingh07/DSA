#include<iostream>
using namespace std;
int insertion(int arr[],int n){
	int j;
	for(int i=1;i<n;i++){
		int temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
				arr[j+1]=arr[j];
				else{
			break;
		}
		
		}
	arr[j+1]=temp;
	}
	
	
	for(int t=0;t<n;t++){
		cout<<arr[t];
	}
	
}
int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion(arr,n);
	
}
