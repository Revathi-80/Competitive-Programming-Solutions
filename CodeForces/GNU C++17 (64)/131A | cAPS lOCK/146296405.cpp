#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
string s;
int cnt=0,up=0;
cin>>s;
for(int i=0;i<s.length();i++){
 if(isupper(s[i]))
  cnt++;
}
 
if(islower(s[0])){
 for(int i=1;i<s.length();i++){
  if(isupper(s[i]))
   up++;
 }
}
if(cnt==s.length() || up==s.length()-1){
 for(int i=0;i<s.length();i++){
  if(isupper(s[i]))
  s[i]=tolower(s[i]);
 else
  s[i]=toupper(s[i]);
 }
}
cout<<s<<endl;
}
 
 
int main()
{
  // int t;
   //cin>>t;
    //while(t){
    solve();
   // t--;
   // }
    return 0;
}