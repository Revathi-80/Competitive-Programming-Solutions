 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 ll n,m;
 cin>>n>>m;
 ll cnt=abs(n-m);
 
 cout<<((cnt+9)/10)<<endl;
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