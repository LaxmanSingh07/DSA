#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;

l.push_back(1);
l.push_front(2);
for(int i:l){
	cout<<i<<" ";
}	
cout<<endl;

l.erase(l.begin());
cout<<"after erase"<<endl;
for(int i:l){
	cout<<i<<" ";
}
//erase time complex  O(n)
cout<<sie
	
	return 0;
}
