// #include<iostream>
// using namespace std;
// int main(){

// char arr[100]="apple";
// int i=0;

// while (arr[i]!='\0')
// {
//     cout<<arr[i]<<endl;
//     i++;
// }



// return 0;




// }

// another way can also do that 
/*
#include<iostream>

using namespace std;

int main(){
char arr[100];
cin>> arr;
cout<<arr;


    return 0;
}*/
// check palindorme in string 
// RACECAR 
// first and last chat .......
// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// char arr[n+1];

// cin>>arr;
// bool check =1;

// for(int i=0;i<n;i++){
//     if(arr[i]!= arr[n-1-i]){
//         check =0;
//         break;
//     }
// }

// if(check == true )
// {
//     cout<< "word is a palindrome "<<endl;
// }
// else{
//     cout<<"word is not palindrome ";
// }
//     return 0;
// }



// find the largest word in the sentence 
//  do or die;
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

char arr[n+1];
cin.getline(arr,n);
cin.ignore();
int currlen=0, maxlen=0;
int st=0,maxst=0;

int i=0;
while (1)
{
    if(arr[i]== ' '|| arr[i]== '\0')
 {
    if(currlen >maxlen){
        maxlen=currlen;
        mxst=st;
    }
    currlen =0;
}
else{
    currlen++;

}
if(arr[i]=='\0')
        break;
        i++;
}

cout<<maxlen<<endl;



    return  0;
}


