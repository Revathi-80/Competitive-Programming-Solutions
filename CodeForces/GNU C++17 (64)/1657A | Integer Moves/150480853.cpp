#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPerfect(ll n){
  ll x= sqrt(n);
  return (x*x==n);
}
 
void solve(){
 ll x,y;
  cin>>x>>y;
  if(x==0 && y==0){
    cout<<0<<endl;
    return;
  }
  ll d=(x*x)+(y*y);
  if(isPerfect(d)){
    cout<<1<<endl;
  }
  else
    cout<<2<<endl;
  
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