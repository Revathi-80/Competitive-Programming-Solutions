#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll log_a_to_base_b(ll a, ll b)
{
    return log2(a) / log2(b);
}
void solve(){
ll x;
cin>>x;
ll val=1,power=2,count=0;
while(val<=x){
  count++;
  x-=val;
  val=val*2+power*power;
  power*=2;
}
cout<<count<<endl;
}
 
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 