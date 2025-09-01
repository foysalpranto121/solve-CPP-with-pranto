#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;
    cin>>n;
    int years=n/365;
    n=n-(years*365);
    int months=n/30;
    n=n-(months*30);
    int days=n;
  
    cout<<years<<"years"<<'\n';
     cout<<months<<"months"<<'\n';
      cout<<days<<"days"<<'\n';


    return 0;


}
