#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    int n;
    cin >> n;

    cout << isPowerOf2(n) << endl;

    return 0;
}

/*
    // check if the given number is power of 2 or not

    -- brute force could be I will keep dividing the number by 2 and check if the number is 1 or not
        if it is 1 then it is power of 2 otherwise not


    -- but we can do this in O(1) time complexity


    -- if the number is power of 2 then it will have only 1 set bit

    -- 8: 1000

    -- 16: 10000

    -- 32: 100000


    -- 8-1: 7: 0111

    then 8 & 7 = 1000 & 0111 = 0000

*/