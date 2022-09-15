#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
void solve(){
 int n,k,r,c;
 cin>>n>>k>>r>>c;
 vector<vector<char>>a(n,vector<char>(n,'.'));
 a[r-1][c-1]='X';
 int x,y;
 x=r-1,y=c-1;
 while(x>=0){
    for(int i=y;i<n;i+=k) a[x][i]='X';
    for(int i=y;i>=0;i-=k) a[x][i]='X';
 
    x=x-1 ,y=y+1;
    if(y>=n)
      y=0;
 }
 x=r-1,y=c-1;
 while(x<n){
    for(int i=y;i<n;i+=k) a[x][i]='X';
    for(int i=y;i>=0;i-=k) a[x][i]='X';
 
    x=x+1 , y=y-1;
    if(y<0)
      y=n-1;
 }
 for(int  i=0;i<n;i++){
  for(int j=0;j<n;j++){
    cout<<a[i][j];
  }
  cout<<endl;
 }
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
 