#include<iostream>
using namespace std;
int fiB_term(int n){
    if(n==0||n==1){
        return n;
    
    }
  int ans= fiB_term(n-1)+fiB_term(n-2);
  return ans;
}
int main(){
    int n;
    cout<<"Enter the index of the term which you want to print";
    cin>>n;
cout<<"ans is "<<fiB_term(n);

}