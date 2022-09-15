 
#include<bits/stdc++.h>
using namespace std;
void solve(){
int a,b,c;
cin>>a>>b>>c;
vector<int>v;
v.push_back(a);
v.push_back(b);
v.push_back(c);
sort(v.begin(),v.end());
if(a==b && c%2==0)
 cout<<"YES"<<endl;
else if(b==c && a%2==0)
 cout<<"YES"<<endl;
else if(a==c && b%2==0)
 cout<<"YES"<<endl;
 else if (v[0]+v[1]==v[2])
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
 
}
string to_binary(int x){
 string s;
 while(x>0){
  s+=(x%2?'1':'0');
  x/=2;
 }
 reverse(s.begin(),s.end());
 return s;
}
int main(){
 int t;
 cin>>t;
 while(t){
  solve();
  t--;
 }
return 0;
}