#include <bits/stdc++.h>
using namespace std;

/*
     number of substring containing all three characters

        - brute force

        - generate all the substrings and check the distinct characters in each substring
        - check the occurence of all the characters in the substring

        for(int i=0;i<n;i++){
            int a=0,b=0,c=0;
            for(int j=i;j<n;j++){
                if(s[j]=='a'){
                    a++;
                }
                else if(s[j]=='b'){
                    b++;
                }
                else if(s[j]=='c'){
                    c++;
                }
                if(a>0 && b>0 && c>0){
                    ans++;
                }
            }
        }

        -- observation:

        s= "bbacba"

        we know till 3rd index we have 3 characters after that there is not need to  check for the 4th index and so on just add the rest of the length of the string
        - because they will for sure contain all the three characters

        for(int i=0;i<n;i++){
            int a=0,b=0,c=0;
            for(int j=i;j<n;j++){
                if(s[j]=='a'){
                    a++;
                }
                else if(s[j]=='b'){
                    b++;
                }
                else if(s[j]=='c'){
                    c++;
                }
                if(a>0 && b>0 && c>0){
                    ans+=n-j;
                    break;
                }
            }
        }

        time complexity O(n^2)

        -- optimized approach


        s= "bbacba"

        - with every characters , there is a substring that ends (reverse of that at each index there is a substring that starts) at that index and contains all the three characters

        - what is the minimum length of the substring that contains all the three characters is 3

        - try to find out the minimum length of the substring that contains all the three characters


        s="bbacba"

        - int l=0,r=0,ans=0;

        a=-1,b=-1,c=-1;

        while(r<n){
            if(s[r]=='a'){
                a=r;
            }
            else if(s[r]=='b'){
                b=r;
            }
            else if(s[r]=='c'){
                c=r;
            }
            if(a!=-1 && b!=-1 && c!=-1){
                ans+=1+min({a,b,c});
            }
            r++;
        }

        - time complexity O(n)

*/

int main()
{
    string str;
    cin >> str;
}