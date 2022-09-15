#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n;
 cin>>n;
 string s; cin>>s;
 // first occurence
 vector<int>fo(26,-1);
 for(int i=0;i<n;i++){
  if(fo[s[i]-'A']==-1)
    fo[s[i]-'A']=i;
 }
 // last occurence
 vector<int>lo(26,-1);
 for(int i=n-1;i>=0;i--){
  if(lo[s[i]-'A']==-1)
    lo[s[i]-'A']=i;
 }
 
 //denotes whether he got distracted
 bool flag=false;
 for(int i=0;i<26;i++){
  if(fo[i]==-1)
    continue;
  for(int j=fo[i];j<=lo[i];j++){
       if(s[j]-'A' !=i)
        flag=true;
  }
 }
 if(!flag)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;
}
 
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 