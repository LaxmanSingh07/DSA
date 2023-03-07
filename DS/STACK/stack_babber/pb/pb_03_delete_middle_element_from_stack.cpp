#include<iostream>
using namespace std;
class Stack
{
    int size;
    int top;
    int *S;

    Stack(int size)
    {
        this->size=size;
        S=new int[size];
    }
    void push(int  c)
    {
        top++;
        S[top]=c;
    }
    int pop(void )
    {
        if(top!=-1){
        int c=arr[top];
        top--;
        return c;
        }
        return '\0';
    }
};
int main()
{
    
    return 0;
}

//gfg
//{ Driver Code Starts
//Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++
// void solve(stack<int>&inputStack,int count,int size)
// {
//     //base case
//     if(count==size/2){
//         inputStack.pop();
//         return ;
//     }
//     int num=inputStack.top();
//     inputStack.pop();
//     //recursive call
//     solve(inputStack,count+1,size);
//     inputStack.push(num);
// }
// class Solution
// {
//     public:
//     //Function to delete middle element of a stack.
//     void deleteMid(stack<int>&s, int sizeOfStack)
//     {
//         int count=0;
//         solve(s,count,sizeOfStack);
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin>>t;
    
//     while(t--)
//     {
//         int sizeOfStack;
//         cin>>sizeOfStack;
        
//         stack<int> myStack;
        
//         for(int i=0;i<sizeOfStack;i++)
//         {
//             int x;
//             cin>>x;
//             myStack.push(x);    
//         }

//             Solution ob;
//             ob.deleteMid(myStack,myStack.size());
//             while(!myStack.empty())
//             {
//                 cout<<myStack.top()<<" ";
//                 myStack.pop();
//             }
//         cout<<endl;
//     }   
//     return 0;
// }

// // } Driver Code Ends