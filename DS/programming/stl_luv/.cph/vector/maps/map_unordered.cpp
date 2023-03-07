#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int ,string>&m){
    cout<<m.size()<<endl;
    for(auto &pr :m){
        cout<<pr.first<<" "<<pr.second;
        cout<<endl;
    }
}
int main(){
//     unordered_map<int ,string >m; // it uses hash table
//     m[1]="abc"; // time complexity 0(1) --> in genreally 
//     m[5]="cdc";
//     m[3]="acd";
//     m[6]="a";
//     m[5]="cde";

// // 1. inbuilt implementation
// // 2. time complexity
// // 3. valid keys 
// auto it =m.find(7);
// if(it!=m.end()){
//  m.erase(it);   
// }                   
// unordered_map<pair<int,int>>s;  // pair doestn't have any inbulid hash function
// print(m);

    return 0;
}