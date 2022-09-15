#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n,count=0;
 cin>>n;
 while(n>0){
    while(n%2==0)
        n/=2;
count++;
n/=2;
}
 
 cout<<count<<endl;
}
 
int main()
{ 
  //int t;
  //cin>>t;
  //while(t--){
    solve();
  //}
  return 0;
}
 