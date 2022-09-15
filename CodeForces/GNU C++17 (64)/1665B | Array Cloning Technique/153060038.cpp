#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 ll n;
 cin>>n;
 vector<ll>v;
 set<ll>s;
 map<ll,ll>mp;
 for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  v.push_back(x);
  s.insert(x);
  mp[x]++;
 }
//  sort(v.begin(),v.end());
 ll cnt=0,maxi=INT_MIN;
 for(auto i:mp){
    if(i.second<=maxi)
      continue;
    maxi=i.second;
 }
 ll x=n-maxi;
 //cout<<maxi<<" "<<x<<endl;
 int res=0;
 while(x>0){
  res++;
  if(maxi<x){
    x-=maxi;
    res+=maxi;
    maxi=maxi*2;
  }else{
    res+=x;
    break;
  }
 }
 // ll ans=1;
 // if(maxi!=0)
 //   ans=ceil(x/maxi);
// cout<<ans<<endl;
 cout<<res<<endl;
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
 