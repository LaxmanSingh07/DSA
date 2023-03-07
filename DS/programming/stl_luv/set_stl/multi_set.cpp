#include<bits\stdc++.h>
using namespace std;
void print(multiset<string>&s){
    for(string value: s){
        cout<<value<<endl;
    }
}
// we can stroe the duplicate value in cse of multiset 
int main(){
    multiset<string>s;
    s.insert("abc"); // O(log(n))
    s.insert("zzsdf");
    s.insert("bcdf");
    s.insert("abc"); // --> this string will store two times in case of multiset
    // auto it =s. find("abc"); // 0(long(n)) ---> it return the iterator to the first value 
    // if(it!=s.end()){
    //     s.erase(it); 
    // }
s.erase("abc"); ///--> all "abc will delete "
print(s);

    return 0;
}