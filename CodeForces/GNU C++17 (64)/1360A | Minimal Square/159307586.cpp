#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 ll a,b;
 cin>>a>>b;
 if(b>a) {
  swap(a,b);
 }
 ll c=max(a,2*b);
 cout<<c*c<<endl;
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
 