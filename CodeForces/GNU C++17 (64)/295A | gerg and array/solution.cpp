https://codeforces.com/contest/295/problem/A

#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{  
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>arr(n+2,0);
  for(int i=1;i<=n;i++) cin>>arr[i];
  vector<pair<int,int>>dp(m+2);
vector<int>val(m+2);
for(int i=1;i<=m;i++){
  cin>>dp[i].first>>dp[i].second>>val[i];

}

vector<int>count(m+2,0);
while(k--){
  int x,y;
  cin>>x>>y;
  count[x]+=1;
  count[y+1]+=(-1);
}
for(int i=1;i<=m;i++)
  count[i]+=count[i-1];
vector<int>ans(n+2,0);
for(int i=1;i<=m;i++){
  if(count[i]){
    int l=dp[i].first,r=dp[i].second;
    ans[l]+=count[i]*val[i];
    ans[r+1]-=count[i]*val[i];
  }
}
for(int i=1;i<=n;i++){
  ans[i]+=ans[i-1];
  arr[i]+=ans[i];
}
for(int i=1;i<=n;i++) cout<<arr[i]<<" ";

  return 0;
}
