
#include<bits/stdc++.h>

using namespace std;
// there is no need in case of vector to pass the size of the vector bcz it is dynamic in nature and we can simply use the function vectorname.size() and this function has time complexity of O(1);
void printVec(vector<string/*int*/   >&v){
    // cout<<"size :"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }

    // this is only call by value 
    // v.push_back(2);
    cout<<"\n";
}
// vector is a type of array which is dynamic in nature 


int main(){
    //vector<data_type> name_of_variable
    // we can use pair in the vector also
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;++i){
    //     int x;
    //     cin>>x;
    //     printVec(v);

    //     v.push_back(x); //insert the value at the end 
    //     // time complexity of the push back fucntion is O(1)
    // }
    // vector<int>v(5,100); // by default value in 0;
    // // vector<int>v(5,3); // all elements will be 0 prefill
    // v.push_back(7);
    // // v.pop_back(); //---> this function is used to remove the last elemt of that vector 
    // // vector<int> v2=v;  //--> O(n) -- expensive operation 

    // // you can use &v
    // vector<int> &v2=v;
    // // we can copy the elements of the array directly
    // v2.push_back(5);
    // printVec(v);
    // printVec(v2);




// string and vecotr

vector<string> v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
}
printVec(v);
}