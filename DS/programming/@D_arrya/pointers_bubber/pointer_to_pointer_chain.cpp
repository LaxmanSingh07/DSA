#include<iostream>
using namespace std;

int main(){
//	int num=1000;
//	int *p=&num;
//	
//	cout<<"The value of num is "<<num;
//	(*p)++;
//	cout<<"The value of num is "<<num;
//	cout<<"Address before is "<<p;
//	cout<<p++;
//	
//	int *q=p;
//	cout<<"The value of num in another pointer "<<* q;
//	
//	// important concept
	int it=123;
	int *t=&it;
	(*t)++;
	cout<<(*t);
	cout<<"address is" <<t;
	cout<<"after adding one "<<++t;
	cout<<"after subtracting two "<<--t;
	return 0;
}
