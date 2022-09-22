//difference array

#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   int n,q;
   cin>>n>>q;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }

   vector<int>pre(n+1);
   for(int i=1;i<n+1;i++){
    pre[i]=pre[i-1]+v[i];
   }
   int dp[n+1];
   memset(dp,0,sizeof(dp));
   while(q--){
    int x,y;
    cin>>x>>y;

    dp[x]+=1;
    dp[y+1]+=(-1);

   }
   for(int i=1;i<n+1;i++){
    dp[i]=dp[i-1]+dp[i];
   }
   sort(dp,dp+n+1);
   // for(int i=0;i<n+1;i++){
   //    cout<<dp[i]<<" ";
   // }
   // cout<<endl;
   int sum=0;
   sort(v.begin(),v.end());
   for(int i=1;i<n+1;i++){
     sum+=(dp[i]*v[i-1]);
   } 
   cout<<sum<<endl;
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
