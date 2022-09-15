#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
const int x=1e7;
void solve(){
 string s;
 cin>>s;
 int n =s.length();
 if(s.substr((n-2),2)=="po")
  cout<<"FILIPINO"<<endl;
 else if(s.substr((n-4),4)=="desu" ||s.substr((n-4),4)=="masu")
    cout<<"JAPANESE"<<endl;
 else if(s.substr((n-5),5)=="mnida")
 cout<<"KOREAN"<<endl; 
}
int main(){
 int t;
 cin>>t;
 while(t){
  t--;
  solve();
 }
return 0;
}