#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the no of rows and column";
    cin>>n>>m;
    int s=0;
int l=m*n-1;
int flag=0;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int target;
cout<<"Enter the targeted element ";
cin>>target;

while(s<=l){
    int mid=(s+l)/2;
    
int element =arr[mid/m][mid%m];
if(element == target){
        cout<<"Element is present";
    
        break;
}
if(element>target){
   s=mid+1;
   }
else
 l=mid-1;

}
//if(flag==1){
//    printf("Element is  found ");
//}

    return 0;
}
