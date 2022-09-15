#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
 
void solve(){
ll a,b,c,d,cnt=0;
cin>>a>>b>>c>>d;
if(b>a )
  cnt++;
if(c>a )
  cnt++;
if(d>a )
  cnt++;
cout<<cnt<<endl;
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
 