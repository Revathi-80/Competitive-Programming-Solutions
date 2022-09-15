#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
string s;
cin>>s;
int ans;
for(int i=0;i<s.length();i++){
 ans=s[i]-'0';
 ans=min(ans,9-ans);
 if(ans==0 && !i)
  ans=9;
cout<<ans;
}
 
}
 
int main()
{
  // int t;
   // cin>>t;
   // while(t){
      solve();
    //   t--;
 
    //}
    return 0;
}