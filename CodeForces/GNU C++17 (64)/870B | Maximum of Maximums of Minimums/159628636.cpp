#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
ll a[100005];
ll suf[100005];
void solve(){
 ll n,k;
 cin>>n>>k;
 for(ll i=0;i<n;i++){
  cin>>a[i];
 }
if(k==1){
   ll ans=a[0];
   for(ll i=0;i<n;i++)
    ans=min(ans,a[i]);
   cout<<ans<<endl;
}
else if(k==2){
suf[n-1]=a[n-1];
for(ll i=n-2;i>=0;i--){
  suf[i]=min(a[i],suf[i+1]);
}
ll pref=a[0];
ll ans=max(pref,suf[1]);
for(ll i=1;i<n-1;i++){
  pref=min(pref,a[i]);
  ans=max(ans,max(suf[i+1],pref));
}
cout<<ans<<endl;
}
else
{
  ll ans=a[0];
  for(ll i=0;i<n;i++){
    ans=max(ans,a[i]);
  }
  cout<<ans<<endl;
  
}
}
 
int main()
{ 
  //int t;
  //cin>>t;
  //while(t--){
    solve();
  //}
  return 0;
}
 