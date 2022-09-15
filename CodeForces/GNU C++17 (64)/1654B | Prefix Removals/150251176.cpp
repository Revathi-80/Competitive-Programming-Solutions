#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 string s;
  cin>>s;
  ll ans=-1;
  for (int i = 0; i < s.length();i++)
  {
    ll res=0;
    for (int j= i+1; j < s.length();j++)
    {
      if(s[i]==s[j]){
         ans++;
         res++;
         break;
      }
    }
    if(res==0){
break;
    }
  }
 // for(int i=k;i<s.length();i++){
   // a+=s[i];
  //}
  cout<<s.substr(ans+1,s.size()-ans)<<endl;
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