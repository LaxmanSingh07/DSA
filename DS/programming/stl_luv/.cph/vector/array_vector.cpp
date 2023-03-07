#include<bits\stdc++.h>
using namespace std;

void printVec(vector<int>v){
    // cout<<"size: "<<v.size()<<endl;
for(int i=0;i<v.size(); ++i){
    cout<<v[i]<< " ";
}
cout<<endl;
}



int main(){
int N;
cin>>N;

vector<int >v[N]; // 10 vector of size 10;
for(int i=0;i<N;++i){
    int n;
    cin>>n;
    for(int j=0;j<n;++j){
        int x;
        cin>>x;
        v[i].push_back(x);

    }
}


for(int i=0;i<N;i++){
    printVec(v[i]);

}
cout<<v[0][0];

// it is like 2d vector but there is a change
// in this case no of rows is fixed but no of columns are variable  




    return 0;
}