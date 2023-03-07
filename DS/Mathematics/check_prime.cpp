// NAIVE METHOD

#include<iostream>
#include<cmath>
using namespace std;
/*bool uprime(int n){
    if(n==1){
        return false;
    }
    // time complexity ----> is O(n^1/2);
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(uprime(n)){
        cout<<"yes";
        return 0;
    }
    cout<<"no";
    
}
*/

// more effiecnt way 
bool isPrime(int n){
    if(n==1)
    return false;
    if(n==2||n==3){
        return true;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5;i<=n;i=i+6){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"yes";
        return 0;
    }
    cout<<"no";
    
}