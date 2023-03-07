// circular queue

#include <iostream>
using namespace std;

class Queue
{

    int size;
    int front;
    int rare;
    int *arr;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rare = -1;
    }

    bool enqueue(int value)
    {
        // conditon for full
        if (front == 0 && rare == size - 1 || rare == (front - 1) % (size - 1))
        {
            cout << "Queue is full";
            return false; ///
        }

        // first element

        else if (front == -1)
        {
            front = rare = 0;
        }
        else if (rare == size - 1 && front != 0)
        {
            rare = 0;
            arr[rare] = value;
        }
        else
        {
            rare++;
            arr[rare] = value;
        }
        return true;
    }

    int dequeue(void)
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rare) /// single element is present
            front = rare + 1;

        else if (front == size - 1)
        {
            front = 0; // to maintain the  cyclic nature
        }
        else
        {
            front++;
        }
        return ans;
    }
};

int main()
{
    Queue q(4);
    q.enqueue(34);
    q.enqueue(34);
    q.enqueue(34);
    q.enqueue(34);
    q.enqueue(34);

    return 0;
}