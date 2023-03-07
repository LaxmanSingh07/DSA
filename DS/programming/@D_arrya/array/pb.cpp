#include<iostream>
#include<array>
using namespace std;

int main(){

int num[5]={ [0 ... 4] = 3 };  
for(int i=0;i<5;i++){
    cout<<num[i];
}

    return 0;
}