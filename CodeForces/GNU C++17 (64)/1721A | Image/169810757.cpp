#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
 string s1,s2;
 cin>>s1>>s2;
 set<char>s;
 for(int i=0;i<2;i++){
  s.insert(s1[i]);
  s.insert(s2[i]);
 }
 cout<<s.size()-1<<endl;
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
 