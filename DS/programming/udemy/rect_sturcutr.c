#include<stdio.h>
struct rectangle 
{
    int length;
    int breadth;

    // right now this is ont cosuming any memory becaue it is just defination 
    //  if i creat a variable of this type then it will take memory 

};

int main(){
 // declartion of a structure 

 struct rectangle r;


// declartion as well as intiallization 

 struct rectangle k= {10,5};

// how to access the member of a structure // r.lenth =23;  . is known as dot operaotr 

r.length=15;
r.breadth=34;

printf("Area of Rectangle is %d",r.length*r.breadth);


    return 0;
}