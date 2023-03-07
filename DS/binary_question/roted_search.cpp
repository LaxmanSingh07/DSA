#include<iostream>
using namespace std;
int checkpivot(int arr[],int n){
	// first of all we have to find the pivot element 
	int s=0;
	int e=n-1;
	while(s<e){
int mid=(s+e)/2;
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else 
		e=mid;
	}
	return s;
}
search_element(int arr[],int start,int end,int key){
		int s=start;
	int e=end;
	int mid;
	while(s<=e){
	 mid =(s+e)/2;
		if(arr[mid]==key){
			return mid;
		}
		if(arr[mid]>key)
			e=mid-1;
		else{
			s=mid+1;
		}
	}
	return mid;
	
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
int k;
cout<<"Enter the key which you want to find in this array";
cin>>k;	
int pivot=	checkpivot(arr, n);
int check;
if(k>=arr[pivot]&&k<=arr[n-1]){
	
	// bs on second line 
 check=search_element(arr,pivot,n-1,k);
}
else{
	// bs on first line 
check=search_element(arr,0, pivot-1,k);
}
cout<<check;

}
