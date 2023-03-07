#include <iostream>
using namespace std;

void not_a(string str, string &ans)
{
    if (str.empty())
    {
        cout << ans << endl;
        return;
    }

    char ch = str.at(0);
    if (ch == 'a')
    {
        not_a(str.substr(1), ans);
    }
    else
    {
        not_a(str.substr(1), (ans += ch));
    }
}

string skip(string str)
{
     if (str.empty())
    {
       return "";
    }

    char ch=str.at(0);
    if(ch=='a'){
        return skip(str.substr(1));
    }
    else{
        return ch+skip(str.substr(1));

    }

}
int main()
{
    string str, ans = "";
    cout << "Enter the string";
    getline(cin, str);
    // not_a(str, ans);

    ans=skip(str);
    cout<<ans;
    
    return 0;
}