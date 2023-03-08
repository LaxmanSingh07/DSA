#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int minCoins(vector<int>&coins,int n,int amount)
{
    //sort in the decreasing order
    sort(coins.begin(),coins.end(),greater<int>());
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(coins[i]<=amount)
        {
            int c=floor(amount/coins[i]);
            res=res+c;
            amount=amount-c*coins[i];
        }
        if(amount==0)
        {
            return res;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int amount;
    cin>>amount;
    cout<<minCoins(coins,n,amount);
    return 0;
}