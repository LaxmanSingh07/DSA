// #include<iostream>
// using namespace std;

// int main(){
// int a=10;
// int *ptr;
// ptr=&a;

// cout<<&a<<endl;
// cout<<ptr<<endl;

// cout<<*ptr<<endl; // this is known as derefercing 

// *ptr=1000;
// cout<<a<<endl;

//     return 0;
// }



// pointer Arithmetic ++ -- + -

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10;
//     int *ptr=&a;

//     cout<<ptr<<endl;

//     ptr++; // 
//     cout<<ptr<<endl;

//     return 0;
// }

// pointers and Arrays

/*/ name of the array is pointing to the base address fo the array 

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

// int *ptr=&arr[0]; as similar as 
int *ptr= arr;



for(int i=0;i<n;i++){
    // cout<<*(ptr+i);
    // you can also use like this 
    // cout<<*ptr;
    // ptr++;
    // cout<<arr; arr++; this is illegal it is like a cousntant pointer 
    cout<<*(arr+i)<<endl; // as we know an array is the indexing pointer 

}
// cout<<ptr;
// cout<<arr;
// cout<<*ptr;
// cout<<*arr;



    return 0;
}
*/


// pointer to pointe which is known as chain of the pointer 

// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>>n;
// int *ptr=&n;
// int **ptr2=&ptr;

// cout<<*ptr<<**ptr2;
// cout<<*ptr2;


//     return 0;
// }



// passing pointers to function

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b,
    *b=temp;
}
int main(){

    int a=2;
    int b=34;

    swap(&a,&b);
    cout<<a<<" "<<b<<endl;


}