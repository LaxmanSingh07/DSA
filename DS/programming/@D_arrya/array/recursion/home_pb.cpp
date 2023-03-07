#include<iostream>
using namespace std;


void reachHome(int src, int dest){
    cout<<"soucre"<<src<<" "<<"dest"<<dest<<endl;
    if(src==dest){
        cout<<"pahuch gya";
        return ;
    }
    // recursive call
    reachHome(src+1,dest);

}
int main(){
    int dest=10;
    int src=1;
reachHome(src,dest);

    return 0;
}