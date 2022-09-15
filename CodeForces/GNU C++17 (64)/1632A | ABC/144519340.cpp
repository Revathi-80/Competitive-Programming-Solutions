#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(n==1){
    cout<<"YES"<<endl;
return;
}
if(n==2){
 if(s[0]!=s[1])
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
return;
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