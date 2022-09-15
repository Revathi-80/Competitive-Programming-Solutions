 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 ll n;
 cin>>n;
 ll ans=0;
 for(int i=0;i<30;i++){
      if(n&(1<<i))
        ans=i;  // set bit
 }
 cout<<(1<<ans)-1<<endl;
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