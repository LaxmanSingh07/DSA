#include<stdio.h>
void TOH(int n, int a ,int b ,int c){
	if(n==0){
		return ;
	}
	TOH(n-1,a,c,b);
	printf(" %d to %d \n",a,c);
	TOH(n-1,b,a,c);
}
int main(){
	
	int a=1,b=2,c=3;
	int n=3;
	TOH(n,a,b,c);
	return 0;
}
