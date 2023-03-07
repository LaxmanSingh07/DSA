#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> V;
	
	// size in known
	
	vector<int> a(5/*size*/,1 /*1 assign to every*/);
	
	vector<int> last(a);
	cout<<"print last "<<endl;
	
	for(int i:last){
		cout<<i<<endl;
	}
	cout<<"capacity"<<V.capacity()<<endl;
	
	V.push_back(1);
	cout<<"capacity"<<V.capacity()<<endl;
	V.push_back(2);
	cout<<"capacity"<<V.capacity()<<endl;
		V.push_back(3);
	cout<<"capacity"<<V.capacity()<<endl;	
	cout<<"Size"<<V.size()<<endl;	
	
	cout<<"ements at 2nd index"<<V.at(2)<<endl;
	
	cout<<"front"<<V.front()<<endl;
	cout<<"back"<<V.back()<<endl;
	
	cout<<"before pop"<<endl;
	for(int i:V){
		cout<<i<<" ";
		
	}cout<<endl;
	
	V.pop_back();
	
	cout<<"after pop"<<endl;
	for(int i:V){
		cout<<i<<" ";
		
	}cout<<endl;
	
	cout<<"before clear size"<<V.size()<<endl;
	V.clear();
	cout<<"after clear size "<<V.size()<<endl;
	
	
	
	return 0;
}

