#include<iostream>
using namespace std;

bool checkPalindrome( string str, int i, int j){
    if(i>j){
        return 1;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,i+1,j-1);
    }
} 
int main(){


    string name="abcde ";
    cout<<endl;

    bool ispalindrome= checkPalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<"it's a palindrome ";    }

    else{
        cout<<"it is not a palindrome";
    }
}