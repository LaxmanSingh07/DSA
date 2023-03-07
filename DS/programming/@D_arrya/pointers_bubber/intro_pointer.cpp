#include<iostream>

using namespace std;

int main(){
	
//	int *p=NULL;
	
	// pointer to int is created, and pointing to garbage location
	
//	cout<<*p<<endl;
	
	int num=5;
	cout<<num<<endl;
	// address of Operator -&
	cout<<"Address of num is "<<(void *)&num<<endl;
	int *ptr=&num;
	
	cout<<"VALUE IS :"<< *ptr<<endl;
	cout<<"VALUE IS :"<< num<<endl;
	
	cout<<"ADDRESS IS: "<< ptr<<endl;
	cout<<"ADDRESS IS: "<<&num<<endl;
	
	double d=4.3;
	double *ptr2=&d;
	
		cout<<"VALUE IS :"<< *ptr2<<endl;
	cout<<"VALUE IS :"<< d<<endl;
	
	cout<<"ADDRESS IS: "<<&d<<endl;
	cout<<"ADDRESS IS: "<<ptr2<<endl;
	
	
	// checking size of a pointer 
	
	
	cout<<"size of int pointer is "<<sizeof(ptr)<<endl;
	cout<<"size of double pointer is "<<sizeof(ptr2)<<endl;
	
	int z=12314;
	int *ptr3;
	ptr3=&z;
	
	cout<<&z;
	cout<<ptr;
	cout<<z;
	cout<<*ptr3;
	
	
	int tera=5;
	int a=num;
	a++;
	
	int *mera=&tera;
	
	(*mera)++;
	
		cout<<endl<<tera;
	return 0;
}
