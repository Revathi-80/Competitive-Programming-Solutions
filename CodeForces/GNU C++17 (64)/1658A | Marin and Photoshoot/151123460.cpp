#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n,cnt=0,cnt0=0,cnt1=0;
  cin>>n;
  string s;
  cin>>s;
  // vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    if(s[i]=='0')
      cnt0++;
    else
      cnt1++;
  }
  for(int i=0;i<n-1;i++){
      if(s[i]=='0' && s[i+1]!='1'){
        cnt+=2;
        // v.push_back(0);
        // v.push_back(1);
        // v.push_back(1);
      }
      else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
        cnt++;
  }
  // if(cnt0>cnt1+cnt){
  //   cnt=cnt+(cnt0-(cnt+cnt1));
  // }
  // if(s[n]==0)
  //     v.push_back(0);
  //   else
  //     v.push_back(1);
  cout<<cnt<<endl;
  // for (int i = 0; i < v.size(); ++i)
  // {
  //   cout<<v[i];
  // }
  // cout<<endl;
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