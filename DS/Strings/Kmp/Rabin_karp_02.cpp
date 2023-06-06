//Caculate the indices of the occurences of string s in t 

//t.c O(s+t)

//Example: 

// string s="this is this"
// string t="this"


// Ouput: 


// Found at index 0
// Found at index 8



#include<bits\stdc++.h>
using namespace std;

int p=31

const int N=1e5+7,mod=1e9+7;

vector<long long >powers(N);

int main()
{
    string s="man";
    string t="laxmanSinghmanBishtman";
    int n=t.size();
    int m=s.size();

    power[0]=1;
    for(int i=0;i<N;i++){
        power[i]=(power[i-1]*p)%+mod;
    }

    vector<long long >h(n+1,0);
    for(int i=0;i<n;i++)
    {
        h[i+1]=(h[i]+(t[i]-'a'+1)*power[i])%+mod;

    }

    long long h_s=0;
    for(int i=0;i<S;i++){
        h_s=(h_s+s[i]-'a'+1)*power[i])%+mod
    }

    for(int i=0;i+m-1<n;i++)
    {
        long long curr_h=(h[i+m]-h[i]+mod)%mod;
        if(curr_h==(h_s*power))
    }


    return 0;
}