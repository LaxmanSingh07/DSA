// decimal_to_bianry_convert

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int t=n;
// int rem;
// long long int sum=0 ;
// while (n>0)
// {
// rem=n%2;
// sum=sum*10+rem;
// n/=2;
// }
// cout<<"The bianry conversion of is this "<<sum;
//     return 0;
// }


//  binary_to_deciaml_convert 
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem;
    int sum=0;
    int i=0;
    while(n>0){
        rem=n%10;
        sum=sum+pow(2,i)*rem;
        n/=10;
        i++;


    }
    cout<<sum;
    return 0;
}*/

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){

// int n;
// int flag=0;
// cin>>n;
// for(int i=2;i<sqrt(n);i++){
//     if(n%i==0){
//         cout<<"Not prime"<<endl;
//         flag=1;
//         break;
//     }
//     if(flag==0){
//         cout<<"prime"<<endl;
//     }
// }
//     return 0;
// }

// reverse a given no
/*
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int rem,sum=0;
int k=n;
while(n>0){
    rem=n%10;
    sum=sum*10+rem;
    n/=10;

}
printf("%d",sum);
    return 0;
}*/

// is given no is armstrong or not 
#include<iostream>
#include<cmath>
using namespace std; 
int main(){
int n;
int rem;
cin>>n;
int k=n;
int s=n;
int count=0;
int sum=0;
while (k/=10)
{
    int rem=n%10;

 count++;

}
int j=count;
while(j){
    sum+=pow(n,count);
    rem=n%10;
    n/=10; 
    j--;
}
cout<<sum;
if(sum==s){
    printf("Armstrong ");
}
else{
    printf("Not an armstrong ");
}



    return 0;
}