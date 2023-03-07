#include<iostream>
using namespace std;
int getBit(int n, int pos ){
    return ((n&(1<<pos))!=0);
}

int ClearBit(int n,int pos){
    // return ((n&(~(1<<pos))));
    int mask=~(1<<pos);
    return(n&mask);
}

int Setbit(int n, int pos){
    return ((n|(1<<pos)));
}
int Updatebit(int n, int pos, int value  ){

    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main(){
    cout<<getBit(5,2)<<endl;
    cout<<Setbit(5,1)<<endl;
    cout<<ClearBit(5,2)<<endl;
    cout<<Updatebit(5,1,1);

    return 0;
}