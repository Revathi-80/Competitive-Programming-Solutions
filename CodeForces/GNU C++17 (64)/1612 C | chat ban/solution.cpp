https://codeforces.com/problemset/problem/1612/C

#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
  int k,x;
  cin>>k>>x;
  int l=0,r=2*k-1;
  int total= k*k;
  int ans=0;
  while(l<=r){
    int mid=l+(r-l)/2;
    int req=0;
    if(mid>k){
         int diff= mid-k;
         int ind= k-diff;
          req=total - ind*(ind+1)/2;

    }
    else {
      req= mid*(mid-1)/2;
    }

    if(x>req){
      ans=mid;
      l=mid+1;
    }
    else {
      r=mid-1;
    }

  }
  cout<<ans<<endl;
}

signed main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
