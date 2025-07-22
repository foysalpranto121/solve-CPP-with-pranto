#include<iostream>

using namespace std;
int main(){

int n,q;
cin>>n>>q;

int arr[n],pre [n]={0};
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(i==0){
pre[i]=arr[0];




    }
    else pre[i]=pre[i-1]+arr[i];

}
while (q--)
{
    int l,r;
    cin>>l>>r;
    cout<< pre[r]-pre[l]<<endl;

}


return 0;


}