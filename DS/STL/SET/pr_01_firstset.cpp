#include<iostream>
#include<set>
using namespace std;


int main()
{
    set<int,greater<int>>s; 
    s.insert(10);
    s.insert(5);
    s.insert(20);
    

    //What happens when you add the duplicate values in the set 

    //it will simply ignore the values 

    // s.insert(5);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for(auto it=s.rbegin();it!=s.rend();it++)
    {
        cout<<(*it)<<" ";

    }


//find funtion in set 

//find function is used to find the values wheather it is present in the set or not 

auto it =s.find(10);
cout<<endl;
if(it==s.end()){
    cout<<"NO found"<<endl;
}
else
{
    cout<<"Found"<<endl;
}


//s.clear() will clear all the elements in the array
s.clear();
cout<<s.size()<<" ";


//count function count all the times of occurence of the elements 
//but in set all the elmeent occur only one then we can use the count function as the find 

if(s.count(10)){
    cout<<"found";
}
else{
    cout<<"Not found";
}



//erase function 

// is used to remove the element or the group of the elements form the set 

s.insert(3);
s.insert(5000);
s.insert(2);
s.insert(1);

//  it =s.find(2);
// s.erase(it,s.end());

// for(auto it: s){
//     cout<<it<<" ";
// }

//lower_bound function 

it=s.lower_bound(5);
if(it!=s.end()){
    cout<<(*it)<<" ";
}
else{
    cout<<"Given elemnet is greater than the largest"<<endl;
}

cout<<endl;

for(auto it: s){
    cout<<it<<" ";
}

    return 0;
}