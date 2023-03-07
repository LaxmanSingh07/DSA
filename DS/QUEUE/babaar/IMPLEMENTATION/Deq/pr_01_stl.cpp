// push front 
/*
if full ---> Queue is full

if first element 
front==-1;
fornt =rear=0;



if(front==0)---> front=-1;

else normal front---> front ---;

push_rear and pop_front is same as the queue

pop_back -----> pop using the rare 

if(empty)----> Queue is empty 

//single element 

----> then deque is empty --> fornt and rare is equql to -1

//cylic nature 

*/



// STL OF DEQUE

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(234);
    d.push_front(123);
    d.push_back(345);

cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.pop_back();
d.pop_front();
cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_back();

cout<<d.empty();
    return 0;
}