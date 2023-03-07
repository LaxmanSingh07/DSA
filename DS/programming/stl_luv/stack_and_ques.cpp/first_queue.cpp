#include<bits\stdc++.h>
using namespace std;

int main(){
queue<string> q;
q.push("abc");
q.push("deef");
q.push("igh");
q.push("jkl");
while (!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}
// {
//     /* code */
// }

    return 0;
}