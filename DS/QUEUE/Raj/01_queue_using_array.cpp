#include <bits/stdc++.h>

using namespace std;

class Queue
{
    int front;
    int rear;

    vector<int> arr;

public:
    Queue(int n)
    {
        arr.resize(n);
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return rear == arr.size() - 1;
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full";
            return;
        }

        if (front == -1)
        {
            front++;
        }

        arr[++rear] = x;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }

        return arr[front++];
    }
};

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;

    // output
}