#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
 int n;
 cin>>n;
 string s="Timur";
 string str;
 cin>>str;
 sort(str.begin(),str.end());
 sort(s.begin(),s.end());
 //cout<<str<<" "<<s<<endl;
 if(s==str)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;
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
 