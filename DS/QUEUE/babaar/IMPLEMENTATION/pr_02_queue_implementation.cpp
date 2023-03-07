//start front and rare are the same location 

//  if push check  rare=n-1 ---> then the queue is full 
// if pop ----------> first check front !=rare 
//arr[front]=-1;
// front ++;
//if(front==real) ----> then front=rare =start 


//front 
// if(empty)----------> return -1;


#include<iostream>
using namespace std;
class Queue{
    int * arr;
    int size;
    int front;
    int rare;

  
public:
    Queue(int size){
        this->size=size;
        arr=new int [size];
    front =0;
    rare=0;



    }
    void enqueue(int data){
        if(rare==size){
            cout<<"Queue is full";
        }
        else{
            arr[rare]=data;
            rare++;
        }
    }
    int dequeue(){
        if(front==-rare){
            return -1;
        }
        else{
            int ans=arr[front]; 
            arr[front]=-1;

            front++;
            if(front==rare){
                front=rare=0;
            }
        return ans;
        }
    }
    bool isEmpty(){
        if (front==rare){
            return true;
        }
        return false;

    }

};


int main(){
        Queue q(5);

        q.enqueue(34);
        q.enqueue(789);
        q.enqueue(4785952);
        q.enqueue(11);
        q.enqueue(152);
        cout<<q.dequeue()<<endl;
        cout<<q.dequeue()<<endl;
        cout<<q.dequeue()<<endl;
        cout<<q.dequeue()<<endl;
        cout<<q.isEmpty()<<endl;

    return 0;
}