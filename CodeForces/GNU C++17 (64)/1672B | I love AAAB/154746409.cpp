#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
  string s;
  cin>>s;
  int n=s.length();
  int a[n],b[n];
  if(s.length()==1){
      cout<<"NO"<<endl;
    return;
  }
  if(s[n-1]=='A'){
    cout<<"NO"<<endl;
    return;
  }
  // if(n==2){
  //   if(s[0]=='B' && (s[1]=='B' || s[1]=='A'))
  //     cout<<"NO"<<endl;
  //   return;
  // }
int cnta=0,cntb=0;
for(int i=0;i<n;i++){
  if(s[i]=='B')
    cntb++;
  b[i]=cntb;
}
for(int i=0;i<n;i++){
  if(s[i]=='A')
    cnta++;
  a[i]=cnta;
}
bool check=false;
for(int i=0;i<n;i++){
if(s[i]=='B' && b[i]>a[i]){
 check=true;
}
}
if(!check)
cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;
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
 