#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
const int x=1e7;
void solve(){
 int a,b,c;
 cin>>a>>b>>c;
 int a1=b-(c-b);
 if(a1>=a && a1%a==0 && a1!=0){
  cout<<"YES"<<endl;
  return;
 }
 int b1=a+(c-a)/2;
 if(b1>=b && b1%b==0 && b1!=0 && (c-a)%2==0){
  cout<<"YES"<<endl;
  return;
 }
 int c1=a+2*(b-a);
 if(c1>=c && c1%c==0 && c1!=0){
  cout<<"YES"<<endl;
  return;
 }
 cout<<"NO"<<endl;
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