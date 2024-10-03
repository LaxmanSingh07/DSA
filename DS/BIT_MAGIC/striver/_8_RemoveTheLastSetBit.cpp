#include <bits/stdc++.h>
using namespace std;

void removeLastSetBit(int &n)
{
    n = n & (n - 1);
}

int main()
{

    int n;
    cin >> n;

    removeLastSetBit(n);

    return 0;
}

/*

 remove the last set bit (rightmost set bit)

 Brute force could be I will convert the given integer to binary and then remove the last set bit (convert to string and then remove the last set bit)
 then convert the binary to integer

 some observations:

    1. if we subtract 1 from a number then the rightmost set bit and the bits after that will be toggled

    ex: 13: 1101
        13-1 = 12: 1100

        40: 101000
        40-1 = 39: 100111

        84: 1010100
        84-1 = 83: 1010011


    40= 32+8 = 2^5+2^3 = 101000
    39= 32+4+2+1 = 2^5+2^2+2^1+2^0 = 100111




*/