 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 ll a,b;
 cin>>a>>b;
 //ll ans;
 //ll maxi=max(a,b);
 //ll mini=INT_MAX;
 //for(int i=1;i<=maxi;i++){
      //ans= (a^i)+(b^i);
      //mini=min(mini,ans);
 //}
 cout<<(a^b)<<endl;
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