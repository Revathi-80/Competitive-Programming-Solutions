#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
 ll n,m;
 cin>>n>>m;
 ll a[m];
 for(ll i=0;i<m;i++) cin>>a[i];
  ll cnt=0,b=1;
 for(ll i=0;i<m;i++){
   if(a[i]>=b)
    cnt+=(a[i]-b);
   else
    cnt+=(n+a[i]-b);
   b=a[i];
 }
 cout<<cnt<<endl;
}
 
int main()
{
 //   int t;
   // cin>>t;
   // while(t){
      solve();
     //  t--;
 
    //}
    return 0;
}