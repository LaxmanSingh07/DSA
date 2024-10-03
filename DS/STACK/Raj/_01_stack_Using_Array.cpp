#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    vector<int> arr;

public:
    Stack(int n)
    {
        arr.resize(n);
        top = -1;
    }

    bool isFull()
    {
        return top == arr.size() - 1;
    }

    int push(int x)
    {
        if (isFull())
        {
            cout << "Stack is full";
            return -1;
        }
        arr[++top] = x;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty";
            return -1;
        }
        return arr[top--];
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
}