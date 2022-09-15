#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int l=0,cnt=0;
while(l+1<n){
  if(s[l]=='(' || (s[l]==')' && s[l+1]==')')){
            l+=2;
   }
   else {
    int r=l+1;
    while(r<n && s[r]!=')'){
      r++;
    }
    if(r==n){
      break;
    }
    l=r+1;
   }
   cnt++;
}
cout<<cnt<<" "<<n-l<<endl;
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
 