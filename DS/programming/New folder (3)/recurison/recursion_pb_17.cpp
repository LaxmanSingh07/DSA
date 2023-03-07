// wap to generate substrings with ASCII NUMBERS

#include<iostream>
#include<string>
using namespace std;
void subsq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl ;
        return;
    }
    char ch=s[0];
    int code =ch;
    string ros=s.substr(1);


    subsq(ros, ans);
    subsq(ros, ans+ch);
    subsq(ros,ans+to_string(code));

}
int main(){
    
subsq("AB","");


    return 0;
}