// removal of last digit
// time complexity thita d time
#include<iostream>
#include<cmath>
using namespace std;

int count_Digits(int x){
    int res=1;
    while(x=x/10){
        res++;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int m=ceil(log10(n));
    // printf("%d",m);
    cout<<m;
    // int k=count_Digits(n);
    // cout<<k;?
    return 0;
}