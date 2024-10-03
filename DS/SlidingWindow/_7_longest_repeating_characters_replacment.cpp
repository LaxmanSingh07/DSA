#include <bits/stdc++.h>
using namespace std;

/*

-- longest repearing character replacement

    You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

    - brute force
    - generate all the substrings and check the distinct characters in each substring

    - try to find out how many characters are need to be changed to make the substring repeating
        - find the character that is repeating the most in that substring

    len - maxFreq = number of characters that need to be changed

    for(int i=0;i<n;i++){
        vector<int> freq(26,0); // assuming only uppercase english characters
        int maxFreq=0;
        for(int j=i;j<n;j++){
            freq[s[j]-'A']++;
            maxFreq=max(maxFreq,freq[s[j]-'A']);
            int change=j-i+1-maxFreq;
            if(change<=k){
                ans=max(ans,j-i+1);
            }
            else{
                break;
            }
        }
    }

    -- optmized appraoch using sliding window technique

    s="AABABBA" k=2

    int l=0,r=0,maxLen=0,maxFreq=0;

    vector<int> freq(26,0);

    while(r<n){
        freq[s[r]-'A']++;
        maxFreq=max(maxFreq,freq[s[r]-'A']);
        while(r-l+1-maxFreq>k){
            freq[s[l]-'A']--;
            maxFreq=*max_element(freq.begin(),freq.end());
            l++;
        }

        maxLen=max(maxLen,r-l+1);
    }

    TIME COMPLEXITY O(2*n*26) = O(n)

    AAABB

    maxFreq=3

    len-maxFreq= 2

    -i will try to find the maximum length
    - then there is no point to decrease the frequency of the characters (because decreasing the frequency of the characters will not increase the length of the substring)

    - so i will try to increase the window size till the maxLen


    int l=0,r=0,maxLen=0,maxFreq=0;

    vector<int> freq(26,0);


    while(r<n){
        freq[s[r]-'A']++;
        maxFreq=max(maxFreq,freq[s[r]-'A']);
        while(r-l+1-maxFreq>k){
            freq[s[l]-'A']--;
            l++;

        }

        maxLen=max(maxLen,r-l+1);
    }

    -- further optimized approach

    s="AABABBA" k=2


    int l=0,r=0,maxLen=0,maxFreq=0;


    vector<int> freq(26,0);

    while(r<n){
        freq[s[r]-'A']++;
        maxFreq=max(maxFreq,freq[s[r]-'A']);
        if(r-l+1-maxFreq>k){
            freq[s[l]-'A']--;
            l++;
        }

        maxLen=max(maxLen,r-l+1);
    }




*/

int main()
{
}