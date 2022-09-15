#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s1,s2;
  cin>>s1>>s2;
  for(int i=0;i<s1.length();i++){
     // for(int j=0;j<s2.length();j++){
          if(s1[i]==s2[i]) cout<<"0";
          else cout<<"1";
     // }
  }
return 0;
}
 