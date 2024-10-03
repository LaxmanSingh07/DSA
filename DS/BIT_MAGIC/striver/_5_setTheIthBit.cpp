#include <iostream>
using namespace std;

void setBit(int &n, int i)
{
    n = n | (1 << i);
}

int main()
{
    int n, i;

    cin >> n >> i;

    setBit(n, i);

    cout << n << endl;
    return 0;
}

/*

setting the ith bit

-- brute force could be I will convert the given integer to binary and then set the ith bit (convert to string and then set the ith bit)
    then convert the binary to integer

-- but we can do this in O(1) time complexity

    with the help of left shift

   10: 1010

    1<<2: 0100

    10 | (1<<2) = 1010 | 0100 = 1110 = 14
*/