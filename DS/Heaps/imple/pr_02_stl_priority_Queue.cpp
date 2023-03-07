#include <iostream>
#include <queue>
using namespace std;

int main()
{
    cout << "Using priority Queue" << endl;
    priority_queue<int> pq; // by default it is a max heap

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout << "element at Top is " << pq.top() << endl;
    pq.pop();
    cout << "element at Top is " << pq.top() << endl;
    cout << "Size is " << pq.size() << endl;
    if(pq.empty()){
        cout<<"Heap is Empty"<<endl;
    }
    else{
        cout<<"Heap is not empty"<<endl;
    }

    //for min heap 

cout<<endl<<endl;

    priority_queue<int,vector<int>,greater<int>>minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);


cout<<"Element at Top "<<minheap.top()<<endl;
minheap.pop();
cout<<"Element at Top "<<minheap.top()<<endl;
cout<<"Size is "<<minheap.size()<<endl;

if(minheap.empty()){
    cout<<"minheap is Empty"<<endl;
}
else{
    cout<<"minheap is not Empty"<<endl;
}
    return 0;
}