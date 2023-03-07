#include<iostream>
using namespace std;
class Stack
{
    public:
        int size;
        int top;
        char *arr;
    Stack(int size)
    {
        this->size=size;
        arr= new char[size];

    }
    void push(char c)
    {
      
        top++;
        arr[top]=c;
    }

    char pop(void )
    {
        if(top!=-1){
        char c=arr[top];
        top--;
        return c;
        }
        return '\0';
    }
};
int main()
{
    string str;
    cin>>str;
    Stack rev(str.size());
    int i=0;
    int m=str.size();
    while (i!=(str.size()))
    {
        rev.push(str[i]);
        i++;
    }

    i=0;
    while(i!=m)
    {
        str.at(i)=rev.pop();
        i++;
    }
    cout<<str;


    
    return 0;
}