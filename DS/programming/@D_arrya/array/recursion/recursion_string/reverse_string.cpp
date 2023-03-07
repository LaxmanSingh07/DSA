#include<iostream>
using namespace std;
// void reverse_str(string& s,int i, int j ){
//     // base case 
//     if(i>j){
//         return ;
//     }
//     // swap(s[i],s[j]);
//     // i++;
//     // j--;

//     char temp=s[i];
//     s[i]=s[j];
//     s[j]=temp;
//     i++;
//     j--;

//     reverse_str(s,i,j);
// }

// void reverse_str(string& s ){
//     if(s.length()==0){
//             return ;}       

//     reverse_str(s--,s.length()-1);
    
// }
int main(){
string name="laxman";
reverse_str(name,0,name.length()-1);
cout<<name;

    return 0;
}