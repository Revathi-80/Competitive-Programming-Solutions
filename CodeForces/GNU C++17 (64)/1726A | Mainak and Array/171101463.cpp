#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  v.push_back(x);
}
// int x=*min_element(v.begin(),v.end());
// int y=*max_element(v.begin(),v.end());
// if(x==v[0] && y!=v[n-1]){
//   cout<<y-x<<endl;
// }
// else if(y!=v[n-1] && x!=v[0]){
//   int z=y-v[0] , r=v[n-1]-x;
//   cout<<min(z,r)<<endl;
// }
// else {
// cout<<y-x<<endl;
// }
int res=0;
for(int i=0;i<n-1;i++){
     res=max(res,v[i]-v[i+1]);
}
for(int i=1;i<n;i++){
  res=max(res,(v[i]-v[0]));
  
}
for(int i=n-1;i>=0;i--){
  res=max(res,(v[n-1]-v[i]));
}
cout<<res<<endl;
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
 