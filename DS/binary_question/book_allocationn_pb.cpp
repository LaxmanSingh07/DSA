#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
	int studentcount=1;
	int pagesum;
	
	for(int i=0;i<n;i++){
		if(pagesum+arr[i]<=mid){
			pagesum+=arr[i];
		}
		else{
			studentcount++;
			if(studentcount >m|| arr[i]>mid){
				return false;
		
			}
				pagesum=arr[i];
		}
	}
	return true;
}
int book_check(int arr[],int n,int m){
	int s=0;
	int sum=0;
	
	
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int ans=-1;
	int e=sum;


	int mid=s+(e-s)/2;
	while(s<=e){
		
		if(ispossible(arr,n, m ,mid)){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
	
	int n;
	cin>>n;
	cout<<"enter total element in an array ";
	int m;
	cout<<"Enter the no of student ";
	int arr[n];
	cout<<"Enter the pages of the books ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int book_min=book_check( arr, n,m);
	return 0;
}
