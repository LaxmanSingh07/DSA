#include<bits\stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int> s;
for(int i=0;i<n;++i){
    int x;
    cin>>x;
    s.insert(x);
}
// auto it =lower_bound(s.begin(),s.end(),5);// ----------"This is right but not more effiecent it may causes 'TLE'  bcoz time complexity of this function is O(n)

auto it=s.lower_bound(5);
cout<<(*it)<<endl;

    return 0;
}