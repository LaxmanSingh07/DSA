// removal of last digit
// time complexity thita d time
#include<iostream>

using namespace std;
bool isPal(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp/=10;
    }
    return (rev==n);
}
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
    cout<<isPal(n);
    return 0;
}