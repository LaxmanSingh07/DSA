#include<iostream>
#include<string>
#include<string>

using namespace std;

void reverse_String(string &str,int i,int j)
{
    //base case 

    if(i>=j)
    {
        return;
    }
    swap(str[i],str[j]);
    reverse_String(str,i+1,j-1);
}

void reverse_string2(string &str,string &newstr,int i)
{
    if(str[i]=='\0'){
        return;
    }

    reverse_string2(str,newstr,i+1);
    newstr+=str[i];

}


int main()
{
    string name;
    cout<<"Enter the string "<<endl;
    getline(cin,name);
    cout<<name<<endl;
    reverse_String(name,0,name.length()-1);
    cout<<name<<endl;


    cout<<"Another apporach "<<endl;
    string newStr;
    reverse_string2(name,newStr,0);
    cout<<newStr<<endl;

    return 0;
}