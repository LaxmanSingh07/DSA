//there are three types of set 
#include<bits\stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string value:s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it != s.end();++it){
        cout<<(*it)<<endl;
    }

}

int main(){
    set<string> s ; // string in sorted order 
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
auto it =s.find("abc"); 
auto ft=s.find("abc");
if(ft!=s.end()){
    s.erase(it);
    // cout<<(*ft);
}
print(s);

}