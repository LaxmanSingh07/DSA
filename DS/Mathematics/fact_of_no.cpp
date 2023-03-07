#include<iostream>
using namespace std;
/// iterative solution

// int fact(int k){
//     int s=1;
//     for(int i=1;i<=k;i++){
//         s*=i;
//     }
// return s;
// }
int fact(int k){
    // time complexitzy of this fucntion is theta (n) and space complexity is  theda (n)
    if(k==0||k==1){
        return 1;
    }
    return k*fact(k-1);
}
int main(){
int n;cin>>n;
int k=fact(n);
cout<<k;
    return 0;
}