#include <iostream>
using namespace std;

void phone(string p, string up)
{
    if (up.empty())
    {
        cout << p << " ";
        return;
    }

    int digit = up.at(0) - '0'; // this will convert '2' to 2
    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = (char)('a' + i);
        phone(p + ch, up.substr(1));
    }
}

int main()
{
    phone("", "12");
    return 0;
}