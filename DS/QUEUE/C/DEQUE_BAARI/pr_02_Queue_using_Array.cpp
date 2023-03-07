#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        Q = new int[5];
    }

    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqeue(Queue, int);
    int dequeue(Queue);
    void Display(Queue);
};
void Queue::enqeue(Queue q, int data)
{
    if (rear == size - 1)
    {
        cout << "Queue Full\n";
    }
    else
    {
        rear++;
        Q[rear] = data;
    }
}
int Queue::dequeue(Queue q)
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        x = Q[front + 1];
        front++;
    }
    return x;
}
void Queue::Display(Queue q)
{
    if (front == rear)
    {
        cout << "Queue is Empty ";
    }
    else
    {
        for (int i = front + 1; i <= rear; i++)
        {
            cout << Q[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of the Queue" << endl;
    cin >> size;
    Queue s(size);

    for (int i = 0; i < size; i++)
    {
        int data;
        cout << "Enter the data:   ";
        cin >> data;
        s.enqeue(s, data);
    }

    s.Display(s);
    int d;
    cout << "how many elements you would like to delete" << endl;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        s.dequeue(s);
    }
    s.Display(s);
    return 0;
}