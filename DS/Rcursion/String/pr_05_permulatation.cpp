#include <iostream>
#include<string>
#include<vector>

using namespace std;
void permutation(string p, string up)
{
    if (up.empty())
    {
        cout << p << endl;
        return;
    }

    char ch = up.at(0);
    for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        permutation(f + ch + s, up.substr(1));
    }
}


vector<string> permutation2(string p,string up)
{
    if (up.empty())
    {
       vector<string>list;
       list.push_back(p);
       return list;
    }

    char ch=up.at(0);
    vector<string> ans;
     for (int i = 0; i <= p.length(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        ans.push_back(permutation(f + ch + s, up.substr(1)));
    }
    return ans;

}

int main()
{
    // string str;
    // getline(cin,str);
    permutation("", "abc");
    return 0;
}