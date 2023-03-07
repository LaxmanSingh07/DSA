#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
    int a[5]={1,2,3,45,5};
    a[0]=10;

// int n;
// cin>>n;
// int a[n]={1,2,3,4,5,6};
    cout<<sizeof(a);

    for(int x:a){
        cout<<x<<endl;
    }

printf("%d",a[6]);

    return 0;
}