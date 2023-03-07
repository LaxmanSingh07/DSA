/*Unordered map in cpp STL
    random order
    Used to store key, value pairs
    uses Hashing
    No order of keys


    map----> it is based on red black tree
    unordered map ----> it is based on hashing

*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20; //[ ] is known as the member access operator
    // m[] ---> return a reference to the member
    // if the member is not present they will insert that key

    m["ide"] = 30;
    m.insert({"courses", 53});
    // m.insert is a standard function to insert a key value pair

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    // it search for an element wheather prsent in the map or not if present then it will return the reference to that element ,if not present then it will return reference to element -
    if (m.find("ide") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    auto it = m.find("ide");
    if (it != m.end())
    {
        cout << (it->second) << endl;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }

    // rbegin()----> is a function that gives a reverse iterator which points to the last element

    // count function in unordered_map is used to find wheather the element is present or not it is substitute to the find function

    // it will return 1 if present otherwise

    if (m.count("ide") > 0)
    {
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    // size function will return you the no of key value pairs in th unordered map
    cout << m.size() << endl;

    m.erase("ide");
    // erase function can also reveive the iterator
    m.erase(m.begin());
    cout << m.size() << endl;

    m.erase(m.begin(), m.end());
    cout << m.size()  << endl;


//time comp
    return 0;
}