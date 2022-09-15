#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
  ll M=998244353;
long long fact(int n){
  if(n==1)
    return 1;
  else
    return (n*((ll)fact(n-1))%M)%M;
}
void solve(){
 
 ll n;
  cin>>n;
  if(n%2!=0){
    cout<<0<<endl;
    return ;
  }
  else{
    ll ans=(fact(n/2)*fact(n/2))%M;
    cout<<ans<<endl;
    return;
  }
 
 
}
int main()
{
   int t;
   cin>>t;
  
    while(t){
   solve();
   t--;
    }
    return 0;
}