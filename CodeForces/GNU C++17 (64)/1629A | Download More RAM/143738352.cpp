#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
const int x=1e7;
void solve(){
 int n,k;
 cin>>n>>k;
  int a[n],b[n];
 for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
   int sum=k;
   vector< pair <int,int> > v;
    for (int i=0; i<n; i++)
        v.push_back( make_pair(a[i],b[i]) );
  sort(v.begin(),v.end());
  //sum=k;
  for(int i=0;i<n;i++){
   if(v[i].first<=k){
    k+= v[i].second;
    //cout<<k<<" ";
   }
}
  cout<<k<<endl;
}
int main(){
 int t;
 cin>>t;
 while(t){
  solve();
  t--;
 }
return 0;
}