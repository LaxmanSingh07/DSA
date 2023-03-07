// #include<iostream>
// using namespace std;

// bool ispowerof2(int n){
//     return n&& !(n&n-1);
// }

// int main(){
// cout<<ispowerof2(7)<<endl;


//     return 0;
// }


// wap to count the number of ones in binary representation of a number 

#include<iostream>
using namespace std;

int numerofones(int n){
    int count=0;
    while (n)
    {

        n=n&(n-1);
        count++;
    }
    return count;
    
}
int main(){

cout<<numerofones(19)<<endl;

    return 0;
}



// wap a program to generate eall possible subsets of a set 
// {a,b,c}----> {}
,{c}{b},{b,c},{a},{a,c},{a,b},{a,b,c}
#include<iostream>
void subsets(int arr[], int n){
    for(int i=0;i<(1<<n);i++){    // 1<<n is similar as 2^n
        for(int j=0;j<n;j++){
            if(i&(1<<j)){ // this is get bit 
                cout<<arr[j];
            }
        }

    }
}
using namespace std;
int main(){

int arr[4]={1,2,3,4};

subsets(arr,4);


    return 0;
}