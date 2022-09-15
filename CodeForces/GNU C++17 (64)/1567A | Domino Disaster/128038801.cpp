#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t,n;
  cin>>t;
  string s;
  while(t--){
      cin>>n;
      cin>>s;
      for(int i=0;i<n;i++){
          if(s[i]=='L') cout<<"L";
                 else   if(s[i]=='R') cout<<"R";
 
          else if(s[i]=='D') cout<<"U";
          else cout<<"D";
      }cout<<endl;
  }
return 0;
}