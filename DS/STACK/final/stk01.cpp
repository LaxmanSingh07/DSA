#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<int>s;

    //insertion 

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //element on the top of the stack

    cout<<s.top()<<endl;


    //size of the stack 

    cout<<s.size()<<endl;

    //display

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}