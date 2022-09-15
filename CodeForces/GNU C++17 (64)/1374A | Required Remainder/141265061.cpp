 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long  mod = 1000000007;
void solve(){
 long long x,y,n;
 cin>>x>>y>>n;
     if (n - n % x + y <= n) {
   cout << n - n % x + y << endl;
  } else {
   cout << n - n % x - (x - y) << endl;
  }
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