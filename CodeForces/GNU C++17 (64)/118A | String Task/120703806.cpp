#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string s;
 cin>>s;
 for(int i=0,len=s.size();i<len;i++){
     if(s[i]=='a' || s[i]=='A') {
         s.erase(i--,1);
         len=s.size();
     }
     if(s[i]=='e' || s[i]=='E') {
         s.erase(i--,1);
         len=s.size();
     }
     if(s[i]=='i' || s[i]=='I') {
         s.erase(i--,1);
         len=s.size();
     }
     if(s[i]=='o' || s[i]=='O') {
         s.erase(i--,1);
        len= s.size();
     }
     if(s[i]=='u' || s[i]=='U') {
         s.erase(i--,1);
        len= s.size();
     }
     if(s[i]=='y' || s[i]=='Y') {
         s.erase(i--,1);
        len= s.size();
     }
     if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
 }
 for(int i=0;i<s.size();i++)
 cout<<"."<<s[i];
 return 0;
}