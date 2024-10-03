#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int cnt = 0;

    while (n > 0)
    {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}

int anotherWay(int n)
{
    /* you can turn off the right most bit every time*/
    int count = 0;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    // cout << countSetBits(n);
    cout << anotherWay(n);
    return 0;
}

/*


__builtin_popcount(n)

*/