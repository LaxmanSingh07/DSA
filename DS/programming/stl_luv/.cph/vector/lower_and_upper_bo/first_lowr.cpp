#include<bits\stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
// int arr[n];
vector<int>v(n);
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
for(int i=0;i<n;i++){
    cin>>v[i];
}
// sort(arr,arr+n);
sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     cout<<arr[i];
// }
// cout<<endl;
// time complexity of both the fucnion is log(n;)
// int *Ptr=lower_bound(arr,arr+n,6);
// int *Ptr=upper_bound(arr+4,arr+n,6);
auto it=upper_bound(v.begin(),v.end(),6);

// if(Ptr==(arr+n)){
//     cout<<"not found";
//     return 0;
// }
// cout<<(*Ptr)<<endl;
// }

if(it==v.end()){
    cout<<"not found";
    return 0;
}
cout<<(*it)<<endl;


}