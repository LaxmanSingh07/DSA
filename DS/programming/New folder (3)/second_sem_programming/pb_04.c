// C program to display Prime numbers till N
#include<stdio.h>

int  isPrime(int n){
    
	
	for(int i=2; i<n; i++){
		
		if(n%i==0)
         return 0;
	}
	
	return n;
}




// Driver code
int main()
{
	int N = 30;
    int arr[30]={0};
	//check for every number from 1 to N
    int j=0;
	for(int i=1; i<=N; i++){
		//check if current number is prime
		if(isPrime(i)&&j<=N) {
			arr[j]=i;
            j++;
		}
    else 
    arr[i]=0;
        
	}


for(int i=0;i<N;i++){
    printf("%d",arr[i]);
}
	return 0;
}
