#include<iostream>
#include<bits\stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while (t--)
     {
         int n,k;
         cin>>n>>k;

         // mutliset _always sorted order
         multiset<long long >bags;
         for(int i=0;i<n;i++){
             long long cany_cnt;
             cin>>cany_cnt;
             bags.insert(cany_cnt);
         }
         long long total_candies=0;
         for(int i=0;i<k;i++){
             auto last_it=(--bags.end());
             long long  candy_ct=*last_it;
             total_candies+=candy_ct;
             bags.erase(last_it);
             bags.insert(candy_ct/2);
            
         }
         cout<<total_candies<<endl;
     }
     


     return 0;
 }