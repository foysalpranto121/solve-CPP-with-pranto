#include<iostream>
using namespace std;
int main(){

int a1[4]={1,2,3,4},a2[4];
cout<<"a1 :"<<endl;
for (int i = 0; i < 4; i++)
{
    cout<<a1[i]<<endl;

}
// copying all  item 

for (int i = 0; i < 4; i++)
{
 a2[i]=a1[i];

}
cout<<"a2:"<<endl;
for (int i = 0; i < 4; i++)
{
   cout<<a2[i]<<endl;
}




}