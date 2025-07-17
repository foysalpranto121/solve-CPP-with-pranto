#include<iostream>
using namespace std;
int main(){
// fibonacci series using Array 

// 0,1,2,3,5,8,13,21
//0+1=1, 1+1=2,2+1=3,........
// first =0,second =1, fibo=first +second;
// first =second , second = fibo;
int n, a[20];
cout<<"enter numbers"<<endl;
cin>>n;
a[0]=0;
a[1]=1;
for (int i = 2; i < n; i++)
{
   a[i]=a[i-1]+a[i-2];

}
cout<<"fibonacci Numbers"<<endl;


for (int i = 0; i < n; i++)
{
cout<<a[i]<<endl;
}

}
