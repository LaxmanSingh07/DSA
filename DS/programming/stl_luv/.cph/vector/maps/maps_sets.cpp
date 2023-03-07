#include<bits\stdc++.h>
using namespace std;

void print(map<int ,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<< pr.first <<" "<< pr.second ;
    }
}

int main(){
// normal map will store in sorted order
    // map<int, string>m; 
    // m[1]="abc"; //O(long(n));
    // m[5]="cbc";
    // m[3]="acd";

    // m.insert({4,"afg"});
    // m.clear
    // m[6]="a"; // it will also take )log(n);
    // m[5]="cde"; // key is alway unique in map we 
    // //if we try to use the previous key then the value of that particualr key will replace 

    // map<int ,string>:: iterator it;
    // for(it= m.begin(); it!=m.end();++it){
    //     cout<<(*it).first<<" "<<(*it).second<<" ";

    // }
//     for(auto &pr:m){
//         cout<<pr.first<<" "<<pr.second<<" ";
//     }
//     // accessing the particualer element is O(log(n));
// m.erase(3); // O(long n)
//     auto it =m.find(7); // it will return a iteraotr
//     if(it!=m.end())
// m.erase(it); // O(long n)
//     // map is also dynamic in nature   TIME COMPLEXITY : Olog(n)
//     // if no value will find than it will return the iteratorend 
//     // if(it==m.end()){
//     //     cout<<"N0 value ";
//     // }
//     // else{
//     //     cout<<it->first<<endl<<it->second;
//     // }
//     print(m);

map<string,string> m;
m["abcd"]="ancd "; // time complexity depends upon the length of the array 

}