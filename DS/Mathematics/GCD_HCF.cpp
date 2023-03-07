// I/P ----> a=4,b=6 ,------->op:2
// we can use interesting relation of gcd with styling  
// make the reactange of 4*6 and find the largest style tyle that can fill the complete tyle




// we know that gcd can be max of mik of two no 
//navie solution
// time complexity in the wrost case O(min(a,b));
#include<iostream>
using namespace std;
/*int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;
    }
    return res;
// }*/

//     int gcd(int a,int b){
//         while(a!=b){
//             if(a>b){
//                 a=a-b;
//             }
//             else{
//                 b=b-a;
//             }
//         }
//         return a;
//     }

    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);

    }

int main(){
int a,b;
cin>>a>>b;
int k=gcd(a,b);
cout<<k;

}

// let's understand EUCLIDENAN ALGORITHM
// BASIC IDEA:
//  let 'b' be smaller than 'a';
//  gcd(a,b)=gcd(a-b,b)