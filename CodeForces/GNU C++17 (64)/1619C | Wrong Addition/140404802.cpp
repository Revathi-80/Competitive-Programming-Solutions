 
#include<bits/stdc++.h>
using namespace std;
 void solve() {
long long int a,s;
 cin>>a>>s;
    vector<int>v;
    while(s){
    int x=a%10;
    int y=s%10;
    if(x<=y) 
    v.push_back(y-x);
    else{
     s/=10;
     y+=10*(s%10);
     if(x<y && y>=10 && y<=19 )
      v.push_back(y-x);
     else{
      cout<<"-1"<<'\n';
      return;
     }
    }
    a/=10;
    s/=10;
}
 
if(a) cout<<"-1"<<endl;
else{
 while(v.back()==0) v.pop_back();
 for(int i=v.size()-1;i>=0 ;i--)
  cout<<v[i];
 cout<<endl;
}
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