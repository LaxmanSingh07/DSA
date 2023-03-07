#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>s;
s.push(2);
s.push(3);
s.push(4);
while (!s.empty()) //--> this function returns a boolen expression
{
    cout<<s.top()<<endl;
    s.pop();
}

    return 0;
}