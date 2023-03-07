#include<iostream>
using namespace std;

class Deque{

    int *arr;
    int front;
    int rare;
    int size;
    public:
        //Initalize your data structre ;
        Deque(int size){
            this->size=size;
            arr=new int[size];
            front=rare=-1;
        }

      
    bool pushFront(int value)
    {
        // conditon for full
        if (isFull())
        {
            cout << "Queue is full";
            return false; ///
        }

        // first element

        else if (isEmpty())
        {
            front = rare = 0;
        }
        else if ( front == 0&&rare!=size-1)
        {
            front=size-1;
        }
        else
        {
            rare++;
            
        }
        arr[front]=value;
        return true;
    }
    
    bool pushRear(int value)
    {
        // conditon for full
        if (isFull())
        {
            cout << "Queue is full";
            return false; ///
        }

        // first element

        else if (isEmpty())
        {
            front = rare = 0;
        }
        else if (rare == size - 1 && front != 0)
        {
            rare = 0;
    
        }
        else
        {
            rare++;
           
        }
        arr[rare]=value;
        return true;
    }



int popFront(){
    
  if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rare) /// single element is present
            front = rare =- 1;

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

int popRear(){
    
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if (front == rare) /// single element is present
            front = rare =-1;

        else if (rare==0)
        {
            front = size-1; // to maintain the  cyclic nature
        }
        else
        {
            rare--;
        }
        return ans;
    }

int getFront(){
    if(isEmpty()){
        return -1;
    }
    return arr[front];
}


int getRear(){
    if(isEmpty()){
        return -1;
    }
    return arr[front];
}

bool isEmpty(){
    if(front==-1){
        return true;
    }
    return false;
}

bool isFull(){
    if((front == 0 && rare == size - 1 )|| (front!=0&& (rare == (front - 1) % (size - 1)))){
            return true;
    return false;
}



}

};


int main()
{
    Deque q(5);
    
    return 0;
}