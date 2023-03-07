#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
        
    }
    else{
        // b is odd
        return a*ans*ans;
    }
}
int main(){
int num;
int pow;
cin>>num>>pow;
int total=power(num,pow);
cout<<total ;

    return 0;
}