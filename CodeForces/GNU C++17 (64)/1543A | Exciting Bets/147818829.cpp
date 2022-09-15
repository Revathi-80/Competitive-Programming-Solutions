#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 ll a,b;
 cin>>a>>b;
 if(a==b){
  cout<<0<<" "<<0<<endl;
  
 }
 else{
  ll g=abs(a-b);
  ll m=min(a%g,g-a%g);
  cout<<g<<" "<<m<<endl;
 }
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