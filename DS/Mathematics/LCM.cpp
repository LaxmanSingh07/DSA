// least comman multiple
// the smallest no whcih is divisble by both given no
// if there is NO COMMON PRIME FACTRO THAN LCM IS EQUAL TO THE MULTIPLY OF BOTH THE NO ;    
// time complexity -> O((a*b)-max(a,b));
#include<iostream>
using namespace std;
/*int LCM(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0&&res%b==0){
            return res;
        }
        res++;
    }
    return res;
}
*/
// effiecent way
// TIME COMPLEXITY --> O(log(min(a,b))) 
int gcd(int a,int b){
    if(b==0){
        return a ;
    }
    return gcd(b,a%b);
}
int LCM(int a,int b){
    return a*b/gcd(a,b);
}

int main(){
    int a,b;
    cin>>a>>b;
int k=LCM(a,b);
cout<<k;
    return 0;
}