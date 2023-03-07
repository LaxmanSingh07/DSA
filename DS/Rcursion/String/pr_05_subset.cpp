#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>susbet(vector<int>arr)
{
    vector<vector<int>>outer;
    vector<int>inner;
    outer.push_back(inner);


    for(auto num: arr)
    {
        int size=outer.size();
        for(int i=0;i<size;i++)
        {
            vector<int>in=new vector<int>(outer.get(i));
            in.push_back(num);
        }
    }
    return outer;
}

int main()
{
    return 0;
}