#### 1. What is prime numbers

A number is called prime if it is greater than 1 and has no divisors other than 1 and itself. For example, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 are prime numbers.

--> if any question/problem ---> if it is taking about prime numbers

--> check
--> generatee
--> compare
--> operate

In other words a number n is prime if it is not divisible by any number from 2 to n-1. If n is not prime, then it is called composite number.

`To check if no is prime or not is known as primality test.`

#### 2. How to check if a number is prime or not

##### Simple

```cpp

bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}
```

but what is better than this ?

something like sqrt(n) or log(n)

For a number n all the divisors form a pair. One of the divisors will be less than or equal to sqrt(n) and the other will be greater than or equal to sqrt(n). So, if there is a divisor less than or equal to sqrt(n), then there will be a divisor greater than or equal to sqrt(n) and vice versa. So, to check if n is prime, we can check for divisors less than or equal to sqrt(n) only.

```cpp

bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

```

### Prime factorization

Prime factorization of a number is the process of finding all the prime numbers that divide a number exactly. For example, prime factorization of 12 is 2, 2, 3.

```cpp

// pair<int,int> --> {prime factor, power}

vector<pair<int,int>>PrimeFactros(int n){
    vector<pair<int,int>>ans;

    for(int i=2;i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            ans.push_back({i,cnt});
        }
    }
    return ans;
}

// time complexity will be O(nlog(n))
// space complexity will be O(1)
```

but how to optimize this ?

```cpp

vector<pair<int,int>>PrimeFactros(int n){
    vector<pair<int,int>>ans;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            ans.push_back({i,cnt});
        }
    }
    // there will be only one prime factor greater than sqrt(n)
    if(n>1) ans.push_back({n,1});
    return ans;

    //
}
```

Ques: Find from every number [1,n] what all numbers are prime ?

Things which I have learn from that time complexity will be O(nsqrt(n)) and space complexity will be O(1)

It will be very large if n is very large.

So better approach could be O(nlog(n)) but this is not possible because we have already seen that to check if a number is prime or not we need to check for divisors upto sqrt(n) only. i.e minmum time complexity will be O(nsqrt(n)).

- But there can be some optimization in this.

#### 3. Sieve of Eratosthenes

- This is algorithm is used to find all prime numbers upto a given number n.

![](https://th.bing.com/th/id/OIP.KZbuCTct26BkC__wg6lqAAHaFj?rs=1&pid=ImgDetMain)

// first of all assume all the numbers are prime

```cpp

vector<int>sieve(int n){
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            // although you can start from i+i but it is not necessary (for better optimization you can start from i*i)
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

// time complexity will be O(nlog(log(n)))
// space complexity will be O(n)

```

<!-- but what is size of n is very large ? -->
<!-- then how can you able to create the array of that size  -->

<!-- or i will ask you to find the prime number from 10^12 to 10^14 -->

<!-- in this case we can't create the array of size 10^14 and can't iterate over it.  -->

<!-- in this case we use the segemented Sieve -->

<!-- the actual range length is (10^(14-12)) -->

// Some Rules to be followed for the segmented sieve

1. Genrate all prime Numbers until sqrt(R)
2. Use these prime numbers to mark all the composite numbers in the range [L,R]

```cpp
vector<int>sieve(int n){
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            // although you can start from i+i but it is not necessary (for better optimization you can start from i*i)
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}

vector<bool> segmentedSieve(int L, int R){
    vector<bool>isPrime(R-L+1,true);
    vector<bool>prime=sieve(sqrt(R));

    for(long long i=2;i*i<=R;i++){
        if(prime[i]){
            // first multiple of i*i in the range [L,R]
            for(long long j=max(i*i,(L+i-1)/i*i);j<=R;j+=i){
                isPrime[j-L]=false;
            }
        }
    }

    if(L==1) isPrime[0]=false;
    return isPrime;

}

```
