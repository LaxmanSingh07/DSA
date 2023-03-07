#include<iostream>
using namespace std;
// bool isPrime(int n){
//     if(n==1)
//     return false;
//     if(n==2||n==3){
//         return true;
//     }
//     if(n%2==0||n%3==0){
//         return false;
//     }
//     for(int i=5;i<=n;i=i+6){
//         if(n%i==0||n%(i+2)==0){
//             return false;
//         }
//         return true;
//     }
    
// }



///effecient way to solve this pb
void print(int i){
    cout<<i;
}/*
void isPrime(int n){
    if(n<=1){
        return ;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            print(i);
            n/=i;
        }
    }
    if(n>1){
        print(n);
    }
}*/

//more efficent
// wrost case when n is prime
//theta(n^(1/2))
void printPrimefact(int n){
    if(n<=1){
        return ;
    }
    while(n%2==0){
        print(2);
        n=n/2;
    }
    while(n%3==0){
        print(3);
        n/=3;
    }
     for(int i=5;i*i<=n;i=i+6){
         while(n%i==0){
             print(i);
             n/=i;
         }
         while(n%(i+2)==0){
             print(i+2);
             n/=(i+2);
         }
     }
     if(n>3){
         print(n);
     }
//         return true;
//     }
}
int main(){
    int i;   
    cin>>i;
    // for(int j=2;j< i;j++){
    //     if(isPrime(j)){
    //         int x=j;
            
            
    //         while(i%x==0){
    //             cout<<j;
    //             x=x*j;
                
    //         }
            
    //     }
    // }
    // isPrime(i);
    printPrimefact(i);
}