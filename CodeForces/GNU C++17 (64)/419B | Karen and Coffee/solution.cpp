//difference array


#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k,q;
  cin>>n>>k>>q;
  int dp[200001];
  memset(dp,0,sizeof(dp));
  while(n--){
    int x,y;
    cin>>x>>y;
    dp[x]+=1;
    dp[y+1]+=(-1);
  }
  for(int i=1;i<200001;i++){
    dp[i]=dp[i-1]+dp[i];
  }
   for(int i=1;i<200001;i++){
    if(dp[i]>=k) dp[i]=1;
    else dp[i]=0;
  }
   for(int i=1;i<200001;i++){
    dp[i]=dp[i-1]+dp[i];
  }
  while(q--){
    int a,b,cnt=0;
    cin>>a>>b;
    
    cout<<dp[b]-dp[a-1]<<endl;
  }
}

signed main()
{  
  //  int t;
  // cin>>t;
  // while(t--){
    solve();
 // }
  return 0;
}
