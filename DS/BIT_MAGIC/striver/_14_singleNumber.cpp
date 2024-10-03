#include <bits/stdc++.h>
using namespace std;

int bruteForceSingleNumber(vector<int> &v)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }

    for (auto x : mp)
    {
        if (x.second == 1)
        {
            return x.first;
        }
    }

    return -1;

    // time complexity is O(n) + O(n) = O(n)
    // space complexity is O(n/3+1) = O(n)
}

int main()
{
    int n;
    cin >>
        n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << bruteForceSingleNumber(v);

    return 0;
}

/*
    single number ii

    all the element is repeated thrice except one element

    -- brute force could be using hash map (time complexity O(n) and space complexity O(n))

    -- a better approach will be to use bit manipulation

    ex: 5 5 5 2 4 4 4

    5 -> 101
    5 -> 101
    5 -> 101
    2 -> 010
    4 -> 100
    4 -> 100
    4 -> 100

    LET'S DO SOME OBSERVATION

    --> because of 5 we have oth bit we have three onces
    --> because of 5 we don't have 1st bit but because of 2 we have 1st bit

    --> because of 5 and 6 we have 6 1's in 2nd bit



    -----> go over oth bit : count the number of 1's which is 3  divisible by 3 then that bit will be 0
    -----> go over 1st bit : count the number of 1's which is 1 not  divisible by 3 then that bit will be 1
    -----> go over 2nd bit : count the number of 1's which is 3  divisible by 3 then that bit will be 0

    pseudo code

    for(int i=0;i<32;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(v[j] & (1<<i))
            {
                cnt++;
            }
        }

        if(cnt%3!=0)
        {
            ans |= (1<<i);
        }
    }

    time complexity is O(32*n) = O(n)
    space complexity is O(1)



    -- you can also sort the array and then check the adjacent elements

    pseudo code

    sort(v.begin(),v.end());

    for(int i=0;i<n;i+=3)
    {
        if(v[i]!=v[i+1])
        {
            return v[i];
        }
    }

    return v[n-1]; //if you don't find any missing element then return the last element

    // time complexity is O(nlogn) which is better then O(n*32)
    // space complexity is O(1)

    ---- the most optimal approach is to use bit manipulation

    concept of buckets

    nums []=[2,2,2,1]

    ones = 0

    twos = 0

    three = 0

    nums[i] will go to ones , if not in twos
    nums[i] will go to twos, if it is in ones
    nums[i] will go to three, if it is in  twos


    2 -> 010 occuring ist time so ones=2
    but you have to check not in twos

    for that what can you do is

    (nums[i]^ones)~twos

    2 -> 010
    ones -> 000
    ~twos -> 111

    (010^000) & 111 = 010

    suppose if 2 is already in twos

    2 -> 010
    ones -> 010
    ~twos -> 101

    (010^010) & 101 = 000


    -- for second element

    (ones ^ nums[i]) & ~ twos

    2 -> 010
    ones -> 010

     ~twos -> 101

    (010^010) & 101 = 000

    --> it will be deleted from ones

    then we have to put it in the twos

    (twos ^ nums[i]) &~ones;
    (0^010)&001

    -- third element

    2 -> 010

    ones --> 000

    (ones ^2)~(2) --> 0 in the ones

    (twos )


    for(int i=0;i<n;i++){
        ones=(ones^nums[i]) & ~twos;
        twos=(twos ^ nums[i]) & ~ones;
    }

    return ones




*/