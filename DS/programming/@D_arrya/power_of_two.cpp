#include<iostream>
#include<cmath>
using namespace std;
int power_of_Two(int n){
    // if((n&(n-1))==0){
    //     return 1;
    // }
    // else{
    //     return 0;
    // }

        int ans=1;
    for(int i=0;i<=30;i++){
        // int ans=pow(2,i);
        if(ans==n){
            return true;
            if(n<INT_MAX/2)
        ans=ans*2;
        }
    }
    return false;
}
int main(){

int n;
cin>>n;
cout<<power_of_Two(n);
    return 0;

}