 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 ll n;
 cin>>n;
 ll a[n];
 set<ll>s;
 for(ll i=0;i<n;i++){
  cin>>a[i];
  ll x=s.size();
  s.insert(a[i]);
    
 if(x==s.size()){
  a[i]=(-1)*a[i];
  s.insert(a[i]);
 }
 }
 cout<<s.size()<<endl;
 } 
 
int main(){
 ll t;
 cin>>t;
 while(t){
  solve();
  t--;
 }
 
return 0;
}