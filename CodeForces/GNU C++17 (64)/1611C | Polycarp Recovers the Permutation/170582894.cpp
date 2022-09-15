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
int maxi=*max_element(v.begin(), v.end());
if(maxi!=v[n-1] && maxi!=v[0])
  cout<<-1<<endl;
else{
  reverse(v.begin(), v.end());
  for (int i = 0; i < n; ++i)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
 
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
 