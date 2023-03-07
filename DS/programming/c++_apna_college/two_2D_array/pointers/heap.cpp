#include<iostream>
// if we don't known the exact size of teh memoy during the compile time then we can use the dynamic memory allocation
using namespace std;

int main(){
int a=10; // stored in stack
int *p= new int(); // allocate memoy in heap 

*P=10;
delete(p); // manual deallocation of the memory 
p=new int [4];

delete[]p; // it is used the delete the memory which is allocted by our array
p=NULL;
    return 0;
}


// why we are giving the so much importance to deallocaation of the memory
// 1. there may be memory leak if we don't do not dealocate the memory 