 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
void solve(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 string ans="";
 ans+=s[0];
 for(int i=1;i<n;i++){
  if(s[i]<s[i-1] || (sz(ans) > 1 && s[i]==s[i-1]))
   ans+=s[i];
  else
   break;
 }
 cout<<ans;
 reverse(ans.begin(),ans.end());
 cout<<ans;
 cout<<endl;
 } 
 
int main(){
 ll t;
 cin>>t;
 while(t){
  solve();
  t--;
 }
 
return 0;
}