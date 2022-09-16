#include<bits/stdc++.h>
using namespace std;
#define int long long

char int_to_char(int x){
  return 'a'+x-1;
}

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  string ans;
  int i=n-1;
  while(i>=0){
    if(s[i]!='0'){
      ans+=int_to_char(s[i]-'0');
      i--;
    }
    else {
      ans+=int_to_char(stoi(s.substr(i-2,2)));
      i-=3;
    }
  }
  reverse(ans.begin(),ans.end());
  cout<<ans<<endl;
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

