#include<iostream>
#include<string>
using namespace std;

bool checkPalin(string str,int i){
    if(i>=(str.length()/2)){
        return true;
    }
    else if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    return checkPalin(str,i+1);
}
int main()
{
    string str;
    getline(cin,str);
    if(checkPalin(str,0)){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}