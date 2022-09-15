#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
 int n;
 cin>>n;
 // (k,k) (k,2k) (k,3k)
 cout<<n+ 2*(n/2 +n/3)<<endl;
}
 
signed main()
{  
   int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 