// wap  to count the number of paths posssible from star point to end point in gamebord 

#include<iostream>
using namespace std;
int countpath(int s, int e ){
    if(s==e){
        return 1;

    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
    count+=countpath(s+i,e);
    }
    return count;


}
int main(){

cout<<countpath(0,3);
    return 0;

}