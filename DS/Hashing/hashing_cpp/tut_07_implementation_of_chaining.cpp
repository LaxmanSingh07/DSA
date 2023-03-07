#include<iostream>
#include<list>
using namespace std;
class MyHash
{
    int Bucket;
    list<int>*table;
    MyHash(int b){
        Bucket=b;
        table=new list<int>[b];

    }

void insert(int key)
{
    int i=key%Bucket;
    table[i].push_back(key);
}

void remove(int key)
{
    int i=key%Bucket;
    table[i].remove(key);
}
bool search(int key)
{
    int i=key%Bucket;
    for(auto x:table[i] )
        if(x=key)
            return true;
    return false;
}

    
};


int main()
{
    MyHash l();
    l.insert(34);



    
    return 0;
}