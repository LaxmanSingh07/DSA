#include<stdio.h>
int sum(int n){

    if(n==0){
        return 0;
    }
    return sum(n-1)+n;

}
int Isum(int n){
    int s=0;
    int i=0;
    
}