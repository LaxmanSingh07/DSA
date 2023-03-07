// wap to generate all the substring of a string 

#include<iostream>
#include<string>

using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans;
        return ;
    }
   char ch=s[0];
   string ros=s.substr(1);

   subseq(ros,ans);
   subseq(ros,ans+ch);
}
int main(){

    subseq("ABC","");




    return 0;
}