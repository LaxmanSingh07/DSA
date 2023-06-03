#include<bits\stdc++.h>
using namespace std;
int f(int i,int j,string &s,string &t)
{
    if(i<0||j<0) return 0;
    if(s[i]==t[i]) return 1+f(i-1,j-1,s,t);

    return max(f(i-1,j,s,t),f(i,j-1,s,t));

}

int lcs(string s,string t)
{

    //Recursive 

    return f(n-1,m-1,s,t);
    int n=s.size();
    int m.t.size();
}
int main()
{

    return 0;
}