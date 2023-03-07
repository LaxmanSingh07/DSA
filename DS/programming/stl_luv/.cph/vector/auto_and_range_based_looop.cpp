
#include<bits\stdc++.h>
using namespace std;

int main(){
// range based loop;

// it is like call by value 

// vector<int> v={2,3,4,5,6,7};
// for(int value:v ){ // vale of the atual element will copy
//     value++;
// }

// for(int value:v ){
//     cout<<value<<" ";
// }
// // we can use that a call by reference 
// for(int &value:v ){ 
//      value++;
// }
// for(int value:v ){ // vale of the atual element will copy
//     cout<<value<<" ";
// }
// vector<pair<int ,int >> v_p ={{1,2},{2,3}};
// for(pair<int,int> &value: v_p){
//     cout<<value.first <<" "<< value.second<<" ";
// } 

// we can do same thing for  
auto a=1.0; // auto keyword is used to determine the data type of that particular vaiable
cout<<a<<endl;
cout<<sizeof(a);
vector<pair<int ,int >> v_p ={{1,2},{2,3}};
for(auto &value: v_p){
    cout<<value.first <<" "<< value.second<<" ";
} 
    return 0;
}