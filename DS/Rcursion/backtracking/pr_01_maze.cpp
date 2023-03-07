#include<iostream>
using namespace std;


int count(int r,int c)
{
    if(r==1 ||c==1)
    {
        return 1;
    }
    int left=count(r-1,c);
    int right=count(r,c-1);
    return left+right;
}

void path(string p,int r,int c)
{
    if(r==1&&c==1)
    {
        cout<<p<<" ";
    }
    if(r>1)
    {
        path(p+'D',r-1,c);
    }
    if(c>1)
    {
        path(p+'R',r,c-1);
    }
}

int main()
{
    // cout<<count(3,3);
    path("",3,3);
    return 0;
}