#include<bits/stdc++.h>
using namespace std;
// bool should_i_swap(int a,int b){
//     if(a>b){
//    return true;

//     }
//     else{
//       return false;
//     }
// }
bool should_i_swap(pair<int,int>a, pair<int ,int >b){
    if(a.first!=b.first){
        if(a.first>b.first)
        return true;
        return false;
    }
    else{
        if(a.second<b.second){
            return true;
            
        }
        return false;
    }
    // if(a>b){
    //     return true;
    // }
    // return false;
}

int main(){
    int n;
    cin>>n;
// vector<int > v(n);
vector<pair<int,int  > >v(n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end(),should_i_swap);
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(should_i_swap(v[i],v[j])){ //---> this is known as the compreater fucntion
            swap(v[i],v[j]);
        }
    }
}
for(int i=0;i<n;i++){
    cout<<v[i].first<<v[i].second<<endl;
}

    return 0;
}