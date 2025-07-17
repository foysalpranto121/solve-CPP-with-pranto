// getting input in Array
#include<iostream>
using namespace std;
int main() {

int marks[5];


// cin>>marks[0];

// cin>>marks[1];

// cin>>marks[2];

// cin>>marks[3];

// cin>>marks[4];
// for input
for (int i = 0; i <5; i++)
{
    cout<<"marks for student "<<i +1<<"-"<<endl;
cin>>marks[i];



}

cout<<"Marks are:"<<endl;

// for output

for (int i = 0; i <5; i++)
{
cout<<marks[i]<< ""<< endl;



}
}