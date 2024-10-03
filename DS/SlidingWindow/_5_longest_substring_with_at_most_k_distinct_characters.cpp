#include <bits/stdc++.h>
using namespace std;

/*
    - longest substring with at most k distinct characters

    -- brute force

    - generate all the substrings and check the distinct characters in each substring
    - use the set to store the distinct characters

    - time complexity O(n^2 * log(k)) (but k can be at most 256)
    - you can also use the unordered_map to store the distinct characters

    -- optimized approach

        - sliding window technique

        - s="aaabbccd" k=2

        - int l=0,r=0,maxLen=0;

        - map<char,int> mp;

        while(r<n){
            mp[s[r]]++;
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
            }
            maxLen=max(maxLen,r-l+1);
        }


        --- more optimized approach

        - s="aaabbccd" k=2


        - int l=0,r=0,maxLen=0;

        - map<char,int> mp;

        while(r<n){
            mp[s[r]]++;
            if(mp.size()>k){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            if(mp.size()<=k){
                maxLen=max(maxLen,r-l+1);
            }
        }

*/

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
}