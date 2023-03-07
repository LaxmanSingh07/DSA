#include<iostream>
using namespace std;
void towerofHanoi(int n, char src, char dest ,char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<" MOVE FROM "<<src<<"to"<<dest<<endl;
    towerofHanoi (n-1,helper,dest,src);
}
int main(){

    towerofHanoi(3,'A','C','B');


    return 0;
}


// toh

// #include<iostream>
// using namespace std;
// void TOH(int n,int a, int b, int c){
//     if(n>0){
//         TOH(n-1,a,c,b);
//             cout<<"move a disc form "<<a<<c<<endl;
//         TOH(n-1,b,a,c);
//         }
//     }
// int main(){

//     TOH(3, 1,2,3);

// }