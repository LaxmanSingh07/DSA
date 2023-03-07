#include<iostream>
#include<queue>
using namespace std;


int main(){
    //create a queue 

    queue<int> q;
    q.push(23);
    q.push(345);
    q.push(389);
cout<<"The value of front pointer is "<<q.front();
    cout<<"Size of the queue is "<<q.size();

    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue is not empty ";
    }

}
