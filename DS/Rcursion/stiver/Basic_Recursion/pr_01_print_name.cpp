
#include <iostream>
#include <string>
using namespace std;

void printName(string name, int n)
{
    if (n == 0)
        return;
    cout << name << endl;
    printName(name, n - 1);
}
int main()
{
    int n;
    cin >> n;
    getchar();
    string name;
    getline(cin, name);
    printName(name, n);
    return 0;
}