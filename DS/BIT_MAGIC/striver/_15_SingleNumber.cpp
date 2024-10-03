#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

/*

    -- you have given an array
    where all the elements are apperning twice expect for the two distinct number


    -- you can use the hashing and check those two number having the occurance of 1

    ex:  nums [ 2,4,2,6,3,7,7,3]

    2 -> 2
    4 -> 1
    6 -> 1
    3 -> 2
    7 -> 2


    map<int,int >mp

    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }

    for(auto it:mp){
        if(it.second==1){
        ans.add(it.first);
        }
    }

    return ans;


    -- secon appraoch

    xor all the element

    xor = 2^2^7



*/