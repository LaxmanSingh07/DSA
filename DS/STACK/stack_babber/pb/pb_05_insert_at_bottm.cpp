#include<iostream>
#include<stack>
using namespace std;

void recursion_bottom(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    
    int num=s.top();
    s.pop();

    //recursive call 

    recursion_bottom(s,x);
    s.push(num);


}
void bottompush(stack<int> &s,int x){
    recursion_bottom(s,x);

}
void Display(stack<int> s){
    while(!s.empty()){
    cout<<" "<<s.top();
    s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    bottompush(s,34);
    Display(s);

}