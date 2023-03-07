// intro sort is the algorithm which is combination of 3 sorting technique ------------> quick,heap,insertion --------> it is known as best sorting algorithem


#include<bits\stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
// int a[n];
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
// sort(a+2,a+n); // -----------> it takes two inputs first is starting point form where you will start to sort and the other is to till+1 where you want to sort
sort(a.begin(),a.end());
   for(int i=0;i<n;i++){
       cout<<a[i];
   }
   
    return 0;
}