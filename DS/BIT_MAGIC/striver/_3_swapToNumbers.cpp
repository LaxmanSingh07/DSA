#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}

//  xor of same number will be zero

// a =a^b
// b= a^b (a^b^b) (a)
// a=a^b (a^b^a^b^b) (b)