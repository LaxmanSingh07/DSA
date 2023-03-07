#include<iostream>
using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int *arr;
        int *front;
        int *rear;
        int freespot;
        int *nextarr;

      kQueue(int n,int k){
        this->n=n;
        this->k=k;
        front= new int [k];
        rear=new int [k];
        arr=new int [n];
        nextarr=new int[n];
        freespot=0;

        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        for(int i=0;i<n-1;i++){
            nextarr[i]=i+1;
        }
        nextarr[n-1]=-1;



      }  
      void enqueue(int data,int qn){
        // overflow coniditon 

        if(freespot==-1){
            cout<<"No free space is present";
            return ;
        }
        // find first free index 
        int index=freespot;
        //update the freespot
        freespot=nextarr[index];

        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            // link new element to the prev element 

            nextarr[rear[qn-1]]=index;
        }
            //update next 

            nextarr[index]=-1;

            //update rare

            rear[qn-1]=index;


            //push element 

            arr[index]=data;


      }

      int dequeue(int qn){
        //check undeflow condtion 

        if(front[qn-1]==-1){
            cout<<"Queue underflow"<<endl;
            return -1;
        }

        //find index to pop

        int index=front[qn-1];

        //fron ko age badha do 

        front[qn-1]=nextarr[index];

        //freeslots ko manage kro 

        nextarr[index]=freespot;
        freespot=index;
    return arr[index];
      }
};
int main(){

kQueue q(10,3);
q.enqueue(10,1);
q.enqueue(20,1);
q.enqueue(220,2);
q.enqueue(4567,3);

cout<<q.dequeue(1)<<endl;
cout<<q.dequeue(2)<<endl;
cout<<q.dequeue(3)<<endl;

}