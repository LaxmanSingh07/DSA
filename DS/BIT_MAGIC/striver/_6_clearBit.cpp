#include <bits/stdc++.h>
using namespace std;

void clearBit(int &n, int i)
{
    n = n & ~(1 << i);
}

int main()
{
    int n, i;
    cin >> n >> i;

    clearBit(n, i);
    cout << n;

    return 0;
}

/*
    clearing the ith bit

    -- brute force could be I will convert the given integer to binary and then clear the ith bit (convert to string and then clear the ith bit)
        then convert the binary to integer

    -- but we can do this in O(1) time complexity

        with the help of left shift

    13: 1101


    i need to make that particular position bit as 0 and other should not be impacted

    1<<2: 0100

    then take nagation of that number

    ~(1<<2): 1011

    13 & ~(1<<2) = 1101 & 1011 = 1001 = 9

*/