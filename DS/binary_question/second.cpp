 #include <iostream>
 using namespace std;
 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
int mid,s,e;
s=0;
e=n-1;
	//mid=s+(e-s)/2;
while(s<e){
	mid=(s+e)/2;
	if(arr[mid]<arr[mid+1]){
		s=mid+1;
	}
	else
	{   
		e=mid;
	}
	//	mid=s+(e-s)/2;
}
cout<<e;
return 0;
}
