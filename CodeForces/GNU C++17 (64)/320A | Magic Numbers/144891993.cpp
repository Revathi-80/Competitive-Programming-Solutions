#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
 string s;
 cin>>s;
 bool flag=true;
 for(int i=0;i<s.length();i++){
    if(s[i]!='1' && s[i]!='4')
       flag=false;
  if(s.find("444")!=s.npos)
       flag=false;
  if(s[0]=='4')
      flag=false;
}
if (flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
 
int main()
{
 //   int t;
   // cin>>t;
   // while(t){
      solve();
     //  t--;
 
    //}
    return 0;
}