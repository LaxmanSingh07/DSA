// // character __ARRAY
// //  need to know the size beforhand.
// //  large size required for operations(concaenate or append ).
// //  No terminating extra Character 


// //  Strings 

// //  . NO need to know size beforehand

// //  performing operations like conactenation & append is easier.
// //  Terminated with a special characte '\0'

// // #include<iostream>
// // #include<string>

// // using namespace std;

// // // diff types of ways to declare a string 
// // int main(){
// // // string str;

// // // cin>>str;
// // // cout<<str;
// // // string str1(5,'n');
// // // cout<<str1<<endl;
// // // string str="laxman";
// // // cout<<str;

// // // if we want to take the input with spaces then just do this which is given below
// // string str;
// // getline(cin,str);
// // cout<<str<<" ";
// //     return 0;
// // }


// // diff function in string 


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str;
//     // if you want to append to string 
//     // ]s1="fam" s1="ily" --> family

//     // string s1="fam";
//     // string s2="ily";

//     // // s1.append(s2); // if you want to append string two to string one 
//     // cout<<s1+s2<<endl;

//     // cout<<s1[1];

// // clear function

// // string abc="sfjoiasjfosadjfio";
// // abc.clear();
// // cout<<abc;


// // lexicographically in c++
// string s1= "xyzc";
// string s2= "abc";
// cout<<s2.compare(s1); // if s2>s1 then +ve
// // if s2=s1 then cout will display 0

// // if s2<s1 then a negative value 
//     return 0;
// }


// empty fucntion in cpp

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

// // string s1="abc";
// // cout<<s1<<endl;

// // s1.clear();
// // if(s1.empty()){
// //     cout<<"string is empty";
// // }

// string s1="abc";
// cout<<s1<<endl;

// if(!s1.empty()){
//     cout<<"string is not  empty";
// }

//     return 0;
// }



// earse function in cpp 
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){


// string s1="abcsdgdfg34r";

// s1.erase(3,3); // starting index, total no of characte has to be delete
// cout<<s1;
//     return 0;
// }

//find fucntion in cpp 
// #include<iostream>
// using namespace std;

// int main(){
// string s1 ="luckysingh";

// cout<<s1.find("singh"); /// it returns the first index of accurence 


//     return 0;
// }



/// insert fucntion in the cpp programming 

// #include<iostream>
// #include<string>
// using namespace std; 
// int main(){

//     string str1="lasingh";
//     str1.insert(2,"xman");
//     cout<<str1;
//     return 0;
// }

// find the length of the function 

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){

//     string s1="nincompoop";

//     // cout<<s1.size()<<"or"<< s1.length()<<" both are the same thing.";

//     // this is very useful while we want to interate in an array 

//     for(int i=0;i<s1.size();i++){
//         cout<<s1[i]<<endl;
//     }
//     return 0;
// }

// we can make the substring using substr function

/*
#include<iostream>
using namespace std;

int main(){
string s2="hellodoston";

string s1= s2.substr(6, 4);
cout<<s1<<endl;

    return 0;
}*/

 // fucntion to convert the numeric string to the interger 

//  #include<iostream>
//  #include<string>
// using namespace std;

// int main(){
// string s2="7895";

// int  s1=stoi(s2);
// cout<<s1+2<<endl;

//     return 0;
// }


// if you want to conver form int to string then it is also possible


/*
#include<iostream>
 #include<string>
using namespace std;

int main(){
int x=786;
cout<< to_string(x)+"2"<<endl;

    return 0;
}
*/


// you can using a function to short the string from header file #include<algorithm

#include<iostream>
#include<algorithm>
 #include<string>
using namespace std;

int main(){
string s1="thisbajoaeoupojsogf";
 // this fuction will short string's element lexicographically 
sort(s1.begin(),s1.end());

 // via the help of s1.begin we get the starting itrerator of that string and s1 .end

 cout<< s1<<endl;



    return 0;
}