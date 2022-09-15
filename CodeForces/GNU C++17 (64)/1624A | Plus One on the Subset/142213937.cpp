#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
const int x=1e7;
void solve(){
 int n,sum=0;
 cin>>n;
 vector<int>v;
 set<int>s;
 for(int i=0;i<n;i++){ 
  int x;
  cin>>x;
  s.insert(x);
  v.push_back(x);
  }
  sort(v.begin(),v.end());
  cout<<v[n-1]-v[0]<<endl;
}
int main(){
 int t;
 cin>>t;
 while(t){
  t--;
  solve();
 }
return 0;
}