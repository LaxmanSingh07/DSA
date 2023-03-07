// pivot element in an array 

#include<iostream>
using namespace std;
int checkpivot(int arr[],int n){
	int mid;
	int s=0;
	int end=n-1;
	
	
	while(s<end){
		mid=(s+end)/2;
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			end=mid;
		}
	}
	return arr[s];
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
}
int hi=	checkpivot(arr,n);
cout<<hi;
	return 0;
}
