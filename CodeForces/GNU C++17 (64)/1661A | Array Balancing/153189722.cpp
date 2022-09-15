#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
ll n;
cin>>n;
vector<ll>a;
vector<ll>b;
for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  a.push_back(x);
}
for(ll i=0;i<n;i++){
  ll y;
  cin>>y;
  b.push_back(y);
}
ll fi,sec,sum=0,x=a[0],y=b[0];
for(ll i=1;i<n;i++){
fi=abs(a[i]-x)+abs(b[i]-y);
sec=abs(a[i]-y)+abs(b[i]-x);
if(fi>sec){
  sum+=sec;
  x=a[i];
  y=b[i];
}
else{
  sum+=fi;
  x=a[i];
  y=b[i];
}
}
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