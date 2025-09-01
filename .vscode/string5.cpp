#include<iostream>
using namespace std;
int main(){
    string s="codeforces";
    char ch=s[s.size()-1];
    string temp="";
    cout<<s<<endl;
    for (int i=s.size()-1;i>0;i--){

     s[i]=s[i-1];


    }
    s[0]=ch;
    cout<<s<<endl;

}