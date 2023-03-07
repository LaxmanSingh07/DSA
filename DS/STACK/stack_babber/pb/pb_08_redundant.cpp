//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include<stack>
class Solution {
  public:
    int checkRedundancy(string s) {
     stack<int> st;
     for(int i=0;i<s.length();i++){
         char ch=s[i];
         
         if(ch=='('||ch=='+'||ch=='*'||ch=='-'||ch=='/'){
             st.push(ch);       
             }
        else{
            
        if(ch==')')
        {
            bool isReqdundant=true;
            while(st.top()!='('){
               
              char top=st.top();
              if(top=='+'||top=='*'||top=='-'||top=='/'){
                  isReqdundant=false;
              }
                st.pop();
            }
     if(isReqdundant==true)
         return true;
     st.pop();

        }
        }
     }
     return false;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends