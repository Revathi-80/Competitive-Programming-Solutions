 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
void solve(){
 ll n,k;
 cin>>n>>k;
// bool flag=true;
 //int arr[n][n];
 if((k>1 && k==n) || k>ceil((double)n/2)){
  cout<<"-1"<<endl;
  return;
 }
 for(ll i=0;i<n;i++){
  for(ll j=0;j<n;j++){
   if(i==j && k>0 && i%2==0){
           cout<<"R",k--;
          }
          else
           cout<<".";
  }
  cout<<endl;
 }
 //cout<<k<<endl;
 //if(k>0){
 // cout<<"-1"<<endl;
 // return;
 //}
 
 
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