// navie approach
/* problem with this is that is will cause overflow even for slight higher value of the n
#include <iostream>
using namespace std;
int factorial(int s)
{
    int fact = 1;
    for (int i = 1; i <= s; i++)
        fact *= i;
    return fact;
}
int trallingzero(int m)
{
    int k = 0;
    int fact = factorial(m);
    
    while(fact%10==0)
        {
            k++;
            fact/=10;
        }
        return k ;
}
int main()
{
    int n;
    cin >> n;

    int k = trallingzero(n);
    cout<<  k;
    return 0;
}
*/
// efficent method for trailing zero
// the is that we have to find the total no of 5 and 2 in the prime factorization of the given number
// but no of 5 is always lesser than 2
// so we will count only no of 5 
#include<iostream>
// time complexity 
// log5n 
//  space complexiy is theta(1);
using namespace std;
int count_di_fact(int m){
    int res=0;
    for(int i=5;i<=m;i=i*5){
        res=res+m/i;
    }
    return res;
}
int main(){
int n;
cin>>n;
int k=count_di_fact(n);
cout<<k;
    return 0;
}