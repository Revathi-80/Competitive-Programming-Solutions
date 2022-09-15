 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 ll n,m,r,c,rd,cd,cnt=0;
 cin>>n>>m>>r>>c>>rd>>cd;
 ll row=1,col=1;
 while(true){
  if(r==rd || c==cd)
   break;
  if(r+row>n || r+row<1 )
   row= row*(-1);
  if(c+col>m || c+col<1)
   col=col*(-1);
 
  c+=col;
  r+=row;
  cnt++;
 }
 cout<<cnt<<endl;
 }   
 
int main(){
 ll t;
 cin>>t;
 while(t){
  solve();
  t--;
 }
return 0;
}