#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=10e5+5;
ll n,m;
ll ans[N];
set<pair<int,int>>s;
void solve(){
cin>>n;
for(ll i=1;i<=n;i++){
  cin>>ans[i];
  ans[i]+=ans[i-1];
  pair<int,int>p={ans[i],i};
s.insert(p);
}
cin>>m;
for(ll i=0;i<m;i++){
  ll x;
  cin>>x;
  pair<int,int>e={x,0};
  auto it=s.lower_bound(e);
  cout<<it->second<<endl;
}
 
 
}
 
int main()
{ 
  //int t;
  ///cin>>t;
  //while(t--){
    solve();
  //}
  return 0;
}
 