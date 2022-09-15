 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
 string s;
 cin>>s;
 if(s.length()%2!=0)
  cout<<"NO"<<endl;
 else{
  int cnt=0;
  int x= s.length()/2;
  for(int i=0;i<x;i++){
   if(s[i]==s[x+i])
    cnt++;
  }
  if(cnt==x)
   cout<<"YES"<<endl;
  else 
   cout<<"NO"<<endl;
  
 }
}
return 0;
}