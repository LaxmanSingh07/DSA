// printing subsequence whose sum i K
//  (take| not_take)
//  int index,vector<int>,sum
// arr=[1,2,1]  sum=2
//                                f(0,[],0)
//                 /                                       \ 
    //            /                                         \
    //                f(1,[1],1)                                          f(1,[],0)
//             /                       \                           /                     \ 
    //        /                         \                         /                       \
    //      f(2,[1,2],3)             f(2,[1],2)                  f(2,[2],2)                  f(2,[],0)
//          /             \          /            \              /         \                /        \
    //     /               \        /              \            /           \              /          \
   //f(3,[1,2,1],4) f(3,[1,2],3) f(3,[1,1],2)  f(3,[1],3)  f(3,[2,1],3)      f(3,[2],2)   f(3,[1],1)    f(3,[],0)           \   
    //                                                       (don't)             (print)          (dont)        (don't)
// ()

//(don't print it)  (don't print)


#include <iostream>
#include <vector>
using namespace std;
void solve(int i,vector<int>&sub,vector<int>&str,int sum,int currsum)
{
    if(i==str.size()){
       if(currsum==sum)
       {
        for(auto it:sub)
        {
            cout<<it<<" ";
        }
        cout<<endl;
       }
        return ;
    }
    //take and pick the particular index into the subsequence
    sub.push_back(str[i]);
    currsum+=str[i];
    solve(i+1,sub,str,sum,currsum);
    sub.pop_back();
    currsum-=str[i];
    solve(i+1,sub,str,sum,currsum);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum=0;
    cout<<"enter the sum"<<endl;
    cin>>sum;
    vector<int>sub;
    solve(0,sub,v,sum,0);
}

// TIME COMLEXITY : 

// 2X2X2X2     -----> 2^n
// and n is required to print the array 

// and  height of the recusion in O(n) stack space

