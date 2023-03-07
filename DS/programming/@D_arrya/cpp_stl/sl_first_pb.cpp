#include<iostream>
#include<array>

using namespace std;
int main(){
	int basic[3]={1,2,3};
	array<int,4> a={1,2,3,4};// this is static array also
	
	int size =a.size();
	for(int i=0;i<size;i++){
		cout<<a[i]<<endl;
	}
	
	cout<<"Element at 2nd index->"<<a.at(2)<<endl;
	
	cout<<"Empty of not ->"<<a.empty()<<endl;
	cout<<"first Element"<<a.front()<<endl;
	cout<<"last element"<<a.back()<<endl; 
}
