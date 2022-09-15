#include<bits/stdc++.h>
using namespace std;
void solve(){
 int cnt0=0,cnt1=0;
 string s;
 cin>>s;
 //if(s.length()==1 || s.length()-1==1){
 // cout<<"0"<<endl;
 // return;
 //}
 for(int i=0;i<s.length();i++){
  if(s[i]=='0')
   cnt0++;
  else
   cnt1++;
 }
 int ans=min(cnt0,cnt1);
 if(cnt0==cnt1){
  ans--;
 }
 cout<<ans<<endl;
 
}
 
int main()
{
    int t;
    cin>>t;
    while(t){
      solve();
       t--;
 
    }
    return 0;
}