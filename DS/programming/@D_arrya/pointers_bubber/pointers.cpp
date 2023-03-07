#include<iostream>
using namespace std;
int main(){

// int ar[10];

// cout<<sizeof(ar)<<endl;
// cout<<sizeof(*ar)<<endl;
// cout<<sizeof(&ar)<<endl;

// int *ptr=ar;
// cout<<sizeof(ptr);
// cout<<sizeof(*ptr);
// cout<<sizeof(&ptr);


int arr[10];

// error
// arr=arr+1;

int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
    return 0;
}