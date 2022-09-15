#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 ll l,r;
 cin>>l>>r;
 int ans= floor(r/2)+1;
 if(ans>=l)
  cout<<r%ans<<endl;
else
  cout<<r-l<<endl;
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
 