#include<iostream>
#include<climits>
using namespace std;
int check_the(int n) {
    int rem=0;
int ans=0;

while (n!=0)
{
    rem=n%10;
    if(ans>INT_MAX/10||ans<INT_MIN){
        return 0; 
    }
    ans=ans*10+rem;
    n/=10;
}
return ans;
}

int main(){


int n;
cin>>n;

cout<<"Reverse no is"<<check_the(n);


    return 0;
}