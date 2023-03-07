// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s1)
{
   stack<char> s;
   for(int i=0;i<s1.length();i++)
   {
       char ch=s1[i];
       
       //if opening bracket ,stack push
       
       // if close bracket , stack pop
       if(ch=='('||ch=='{'||ch=='['){
           s.push(ch);
       }
       else{
           //for closing bracket 
           if(!s.empty()){
             char top=s.top();
             if(ch==')'&&top=='('||ch=='}'&&top=='{'||ch==']'&&top=='[')
                     s.pop();
             else{
                 return false;
           }
           }
           
           else{
               return false;
           }
               
           
           
       }
 
}
  
   if(s.empty())
   {
       return true;
   }
   return false;
}