// aray is a list cairbles of similar typedef
// {1,2,3,4}
// {c,de,f,g}
// {1,q,a,s,4}

// datatype arayName[Size];
 /*
 #include<iostream>
 using namespace std;

 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     for(int i=0;i<n;i++){
         cout<<arr[i];
     }

    return 0;
 }
*/
 //wap to find the max and min in an array 

 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];

     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int a=INT_MIN;
     int b=INT_MAX;
     for(int i=0;i<n;i++){
    a=max(a,arr[i]);
        //  if(arr[i]>a){
        //      a=arr[i];
        //  }  
    b=min(b,arr[i]);
        //  if(b>arr[i]){
        //      b=arr[i];
        //  }  
     }
     cout<<"The max no is "<<a<<"and the minimum no is "<<b;

     return 0;
 }