#include <bits/stdc++.h>
using namespace std;

int minBitsFlips(int a, int b)
{
    int cnt = 0;
    int n = a ^ b;
    for (int i = 0; i <= 31; i++)
    {
        if (n & (1 << i))
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << minBitsFlips(a, b);
    return 0;
}

/*

    mimimum no of bits flips covert number a to b


    a=10 : 1010
    b=7 : 0111

    0th bit : flip
    1st bit: no flip
    2nd bit: flip
    3rd bit: flip

    total bits need to flip = 3

    a=20 : 10100
    b=25 : 11001

    0th bit : flip
    1st bit : no flip
    2nd bit : flip
    3rd bit : flip
    4th bit: no flip

    total bits need to flip = 3

    // do xor of a and b

    a=10 : 1010
    b=7 : 0111

    a^b = 1101

    then just count the number of set bits in a^b

*/