#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
 
void solve(){
ll n;
cin>>n;
set<ll>s;
for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  s.insert(x);
}
if((n-s.size())%2!=0) cout<<s.size()-1<<endl;
else cout<<s.size()<<endl;
}
 
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 