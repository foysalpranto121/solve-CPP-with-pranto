#include<iostream>
using namespace std;
int main(){
// int a[2][3]={
// {1,2,3},
//       {4,5,6}




// };
int a[2][3];
cout<<"enter elements for the matrix :"<<endl;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
      cin>>a[i][j];
    }
    
}
cout << "Matrix is:" << endl;

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout << endl;
    
}





}