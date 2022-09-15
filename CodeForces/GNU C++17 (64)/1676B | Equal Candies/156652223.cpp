#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
ll n,sum=0;
cin>>n;
vector<ll>v;
for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  v.push_back(x);
}
sort(v.begin(),v.end());
for(ll i=0;i<n;i++){
  sum+=abs(v[i]-v[0]);
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
 