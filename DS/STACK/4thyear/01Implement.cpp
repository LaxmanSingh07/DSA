#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int top;
    int *arr;
    public:
    Stack(int size){
        this->size=size;
        arr=new int[size];
    }

    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }

    int getSize(){
        return top+1;
    }

};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}