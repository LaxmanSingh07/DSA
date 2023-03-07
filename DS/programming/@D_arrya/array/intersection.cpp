#include<iostream>
#include<climits>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int ans;
int arr[1000];
int arr2[1000];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n;j++){
    cin>>arr2[j];
}

// for(int i=0;i<n;i++){
//     int element =arr[i];


//     for(int j=0;j<m;j++){
//         if(element<arr2[j]){
//             break;
//         }
//         if(element==arr2[j]){
//             ans=element;
//             arr[j]=INT_MIN;
//             break;
//         }
//     }
// }
// cout<<ans;

// we can code it in another optimised way

int i=0,j=0;
while (i<n&&j<m)
{
    if(arr[i]==arr2[j]){
        ans=arr[i];
        cout<<ans;
        i++;
        j++;
    }
    else if (arr[i]<arr2[j]){
        i++;
    }
    else{
        j++;
    }
}
// cout<<ans;

    return 0;

}