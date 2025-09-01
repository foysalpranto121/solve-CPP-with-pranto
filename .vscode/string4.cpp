// // functions of String
// #include<iostream>
// using namespace std;
// int main(){
// size or length of two string 
// string str="Daffodil international University";
// cout<<str.length()<<endl;
// cout<<str.size()<<endl;


// }

#include<iostream>
using namespace std;
int main(){

string str="Daffodil international University";
string str1="  dep of swe";
// connect two string
str.append(str1);
// compare two string 
str.compare(str1);
cout<<str<<endl;
// find any thing using find keyword 
cout<<str.find("Daffodil")<<endl;
// Extract any word
cout<<str.substr(5,2)<<endl;

cout<<str<<endl;
cout<<str.at(3)<<endl;
}