#include <bits/stdc++.h>
using namespace std;

int main()
{
}

/*
 you are giving an array of integers, where each integer represents a number of fruits produced by tree (i). you have 2 baskets you can put only single type of furits in each basket. and you can't skip once start picking up then pick congigous manner
 - find the maximum length subarray with at most 2 different types of fruits

 - you can also keep the track of the type of fruits in the basket

  -- brute force then check all the subarrays

  arr[]=[3,3,3,1,2,1,1,2,3,3,4]

    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=0;j<n;j++){
            s.insert(arr[j]);
            if(s.size()<=2){
                ans=max(ans,j-i+1);
            }
            else{
                break;
            }
        }
    }

    // time complexity O(n^2 * 2)  (coz at max 2 types of fruits)


    -- optimized approach

    problem is involving the sliding window technique

    arr[]=[3,3,3,1,2,1,1,2,3,3,4]

    int l=0,r=0,maxLen=0;

    map<int,int> mp;

    while(r<n){
        mp[arr[r]]++;
        while(mp.size()>2){
            mp[arr[l]]--;
            if(mp[arr[l]]==0){
                mp.erase(arr[l]);
            }
        }
        maxLen=max(maxLen,r-l+1);
    }

    // time complexity O(n) + O(n) = O(n)

    // outloop at most move n times
    // and interal at worst case move n times
    // ex: 33333312 (k=2)

    - we can also keep track of index of the fruits with the same types
    - i w ill not allowed to decrease the window size less than maxLen till now


    arr[]=[3,3,3,1,2,1,1,2,3,3,4]

    int l=0,r=0,maxLen=0;

    map<int,int> mp;

    while(r<n){
        mp[arr[r]]++;
        if(mp.size()>2){
            mp[arr[l]]--;
            if(mp[arr[l]]==0){
                mp.erase(arr[l]);
            }
            l++;
        }
        if(mp.size()<=2){
        maxLen=max(maxLen,r-l+1);
        }
    }



*/