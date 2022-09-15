#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPerfect(ll n){
  ll x= sqrt(n);
  return (x*x==n);
}
 
void solve(){
 ll n,b,x,y;
  cin>>n>>b>>x>>y;
  ll ans[n];
  ll sum=0;
  ans[0]=0;
  for(int i=1;i<=n;i++){
    if(ans[i-1]+x <=b ){
     ans[i]=ans[i-1]+x;
    
    }
    else {
      ans[i]=ans[i-1]-y;
 
    }
    
  }
  for(int i=0;i<=n;i++) sum+=ans[i];
 
cout<<sum<<endl;
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