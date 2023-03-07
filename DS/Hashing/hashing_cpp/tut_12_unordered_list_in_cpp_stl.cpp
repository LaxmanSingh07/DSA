#include <iostream>
#include <unordered_set>
using namespace std;

// set ---> self balancing tree
// ADT OF Unorder SET -----> uses hashing

// insert()
// begin()---> it return the iterator to the first element
// end()-----> it returns the iterator which is beyond the last iterator
// size()----> it return the size of the set
// clear()-----> it is used to clear the set
// find()-----> this function is used to find wheather the paricualr element is present in that particular  set then it will return the iterator to that element
// otherwise it will return s.end()
// count() ----> count function can be used to  substitue to the find function
// erase ()----->either use to remove an item or to remove a set of items

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    // you may get different output on different compiler
    // all element in any order

    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    // A permutation
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    cout << s.size();
    if (s.find(15) == s.end())
    {
        cout << "Not found" << endl;
    }

    else
    {
        cout << endl
             << "Present" << *s.find(15);
    }

    s.erase(10);
    cout << endl
         << *s.begin() << endl;
    cout << s.size() << endl;

    // to remove a set of items
    s.erase(s.begin(), s.end()); //--->it willre
    cout << s.size() << endl; //---> ouput will be zero because


    return 0;
}


/*Time complexity 

//O(1)
begin(),end()
cbegin(),cend()



O(1) on averge 
insert(),erase()
erase(it),find()
count()


O(1)

empty()
size()


Applications 
unordered set is mainly implemented using the hashing 
hashing has a great thing search(),insert(),delete()  in O(1) time complexty 



WE can use anywhere when 
we need following opertions 


*/