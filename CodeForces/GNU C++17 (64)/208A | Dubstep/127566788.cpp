#include <bits/stdc++.h>
using namespace std;
 
int main(){
   string s;
   cin>>s;
   int l=s.length(),a=0,b=0;
   for(int i=0;i<l;i++){
       if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
           a=1;
           i+=2;
       }
      else {
      if(a&&b) cout<<" ";
   b=1;a=0;
   cout<<s[i];
      }
   }
  
   
   
 return 0;
}