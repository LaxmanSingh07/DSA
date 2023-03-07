#include<iostream>
using namespace std;

void subsequenceAscii(string p,string up)
{
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    char ch=up.at(0);
    subsequenceAscii(p+ch,up.substr(1));
    subsequenceAscii(p,up.substr(1));
    subsequenceAscii(p+""+(ch+0),up.substr(1));

}

int main()
{
    subsequenceAscii("","abc");
    return 0;
}