#include<iostream>
#include<stack>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s,int  ele){
    if((!s.empty()&&s.top()<ele)||s.empty()){
        s.push(ele);
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive class 
    sortedInsert(s,ele);
    s.push(num);


}
void sort_stack(stack<int> &s)
{
    //base case 
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();

    //recursive call 

    sort_stack(s);
    sortedInsert(s,num);
}
void Display(stack<int> s){
    while(!s.empty()){
    cout<<" "<<s.top();
    s.pop();
    }
}
int main()
{
stack<int> s;
int n;
cout<<"Enter the size of the stack";

cin>>n;
int t;
for(int i=0;i<n;i++){
    cin>>t;
    s.push(t);

}
sort_stack(s);
Display(s);

//time complexity o(n^2);
    return 0;
}