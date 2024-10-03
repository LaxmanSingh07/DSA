#include <iostream>
using namespace std;

bool rightShift(int n, int i)
{
    return (n >> i) & 1;
}

bool leftShift(int n, int i)
{
    return (n & (1 << i));
}

int main()
{

    int n, i;
    cin >> n >> i;

    return 0;
}

// brute force could be I will conver the given integer to binary and then check the ith bit (convert to string and then check the ith bit)

// but we can do this in O(1) time complexity

/*

    with the help of either left shift or right shift


    13: 1101

    1<<2: 0100

    13 & (1<<2) = 1101 & 0100 = 0100 = 4


    or

    (13>>2) & 1 = 0011 & 0001 = 0001 = 1


    if any of the operation gives value >=1 then ith bit is set otherwise not set


*/