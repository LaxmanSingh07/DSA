#include<iostream>
using namespace std;
ispossible(int arr[],int n,int mid,int k){
	int cowcount=1;
	int lastpos=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]-lastpos>=mid){
			cowcount++;
			if(cowcount==k){
				return true;
			}
			lastpos=arr[i];
		}
	}
	return false;
	
}

int cows_pb(int arr[],int n,int e,int cow){
	int s=0;
	int ans=-1;
	int mid=s+(s-e)/2;
	
	while(s<=e){
		if(ispossible(arr,n,mid,cow)){
			ans=mid;
		}
	
	else{
		e=mid-1;
	}
	mid=s+(s-e)/2;
}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	int max=-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	};
//	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	int cow;
	cout<<"Enter the no of cows ";
	
	cin>>cow;
	cows_pb(arr,n,max,cow);
	return 0;
}




