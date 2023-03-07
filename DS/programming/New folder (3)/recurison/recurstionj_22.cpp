#include<iostream>
using namespace std;

int friends_pairing(int n){
    

        if(n==0||n==1||n==2){
            return n;
        }
        return friends_pairing(n-1)+friends_pairing(n-2)*(n-1);
    
}

int main(){
    cout<<friends_pairing(4)<<endl;

    return 0;
}