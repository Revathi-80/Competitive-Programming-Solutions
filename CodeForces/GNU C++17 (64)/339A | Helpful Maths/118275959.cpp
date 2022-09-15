#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 int i;
 for(i=s.length()/2;i<s.length()-1;i++)
  cout<<s[i]<<"+";
 cout<<s[i];
 cout<<endl;
 
         
     
 
 return 0;
}