#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n,m;
cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
  string s;
  cin>>s;
  v.push_back(s);
}
int diff=0,mini=INT_MAX;
for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    diff=0;
    for(int k=0;k<m;k++){
    //  cout<<v[i][k]<<" "<<v[j][k]<<endl;
      diff+=abs((v[j][k]-'a')-(v[i][k]-'a'));
    }
    //cout<<diff<<endl;
    mini=min(mini,diff);
  }
}
cout<<mini<<endl;
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
 