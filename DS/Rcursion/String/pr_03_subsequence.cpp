#include<iostream>
using namespace std;

void subsequence(string p,string up)
{
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    char ch=up.at(0);
    subsequence(p+ch,up.substr(1));
    subsequence(p,up.substr(1));

}

int main()
{
    subsequence ("","abc");
    return 0;
}