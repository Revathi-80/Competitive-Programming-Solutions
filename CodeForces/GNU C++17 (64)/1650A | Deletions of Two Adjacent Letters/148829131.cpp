#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 string s;
 char c;
 cin>>s>>c;
int s_len=s.length();
for(int i=0;i<s_len;i++){
if(s[i]==c && i%2==0){
 cout<<"YES"<<endl;
 return;
}
}
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