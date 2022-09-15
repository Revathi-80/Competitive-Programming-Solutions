#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
int n,z;
cin>>n>>z;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int maxi=0;
for(int i=0;i<n;i++){
 
  int ans= arr[i]|z;
maxi=max(maxi,ans);
//cout<< maxi<<" "<<z<<endl;
 
}
cout<<maxi<<endl;
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
 