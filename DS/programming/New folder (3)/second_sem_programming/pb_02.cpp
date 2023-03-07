// #include<stdio.h>
// #include<math.h>
// int prime(int n){
//     int flag=0;
//     for(int i=3;i<=sqrt(n);i++){
//         if(n%3!=0){
//             flag++;
//         }


//     }

//     if(flag==1){
//         return n;
//     }

// }
 
// int main(){
//     int n;
//     scanf("%d",&n);
// for(int i=n;i>0;i--){
//     printf(" ");
//         }
//         printf("\n");
//     for(int i=2;i<n;i++){
//         if(i%2!=0){
//          printf("%d",   prime(i));

//     }

// }


// }


// C++ program to display Prime numbers till N
#include<iostream>
using namespace std;

//function to check if a given number is prime
int isPrime(int n){
	//since 0 and 1 is not prime return false.
	if(n==1||n==0) return false;

	//Run a loop from 2 to n-1
	for(int i=2; i<n; i++){
		// if the number is divisible by i, then n is not a prime number.
		if(n%i==0) return n;
	}
	//otherwise, n is prime number.
	return true;
}


// Driver code
int main()
{
	int N;
	cin>>N;

	//check for every number from 1 to N
	for(int i=1; i<=N; i++){
		//check if current number is prime
        if(i%2!=0){
		if(isPrime(i)) {
			cout << i << " ";
			cout<<endl;
		}
	}
    }

	return 0;
}
