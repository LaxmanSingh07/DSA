// wap to convert the upper case to lower and lower to u[pper ]

//  #include<iostream>
//  #include<string>
//  #include<algorithm>
//  using namespace std;
//  int main(){

// string str = "asdflkjkj34&JSHFJSDFJKk";
// // conver tnto upper case and upper to lowewr 

// for(int i=0;i<str.length();i++){
//     if(str[i]>='a'&& str[i]<='z'){
//         str[i]-=32;
//     }
//    else if(str[i]>='A'&& str[i]<='Z'){
//         str[i]+=32;
//     }
//     else continue;
// }

// cout<<str;
// we can use this thing using a in-bulit function 

// string s1="jullyigtgf9";
//  transform(s1.begin(), s1.end(),s1.begin(), :: toupper );
//  cout<<s1;
//  // for upper to lower
//  transform(s1.begin(), s1.end(),s1.begin(), :: tolower);
//  cout<<s1;
//      return 0;
//  }

 // wap to find the biggest no using the numeric strign 


//  #include<iostream>
//  #include<string>
//  #include<algorithm>
//  using namespace std;
//  int main(){
//      string s1="45678";
//     //  sort(s1.begin(),s1.end());
//     // //  cout<<s1;
//     //  int s2;
//     //  cout<<(stoi(s1));

//     sort(s1.begin(),s1.end(), greater<int>());

//      return 0;
//  }

 // find the max freuecy of the max char 


 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
     string s= "fthijsfksjklklsafiethaaaaaa";
int freq[100]={0};


for(int i=0;i<s.size();i++){
    freq[s[i]-'a']++;
    
}
char ans ='a';
int maxF=0;

for(int i=0;i<100;i++){
    if(freq[i]>maxF){
        maxF=freq[i];
        ans=i+'a';
    }


}
cout<< maxF<<" "<<ans<< endl;
     return 0;
 }