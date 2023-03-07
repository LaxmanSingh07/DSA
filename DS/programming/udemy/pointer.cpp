// #include<stdio.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr;
//     ptr=&a;
//     printf("%ul",ptr);cout<<endl;
//     printf("%d",*ptr);
// }

// pointer to an array

// #include<iostream>
// using namespace std;
// int main(){

// int arr[5]={1,2,3,4,5};
// int *p;
// p=arr;


// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }

//     return 0;
// }


// mallocc function 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
int n;
cin>>n;
int *p;
p=(int *)malloc(5*sizeof(int));
p[0]=12,p[1]=123,p[2]=2131,p[3]=67,p[4]=678;
for(int i=0;i<5;i++){
    cout<<arr[i];
}
    return 0;

}

// dynamic memery allocation 
