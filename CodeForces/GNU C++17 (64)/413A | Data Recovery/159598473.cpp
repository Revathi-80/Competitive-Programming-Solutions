#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n,m,mini,maxi,pmini=0,pmaxi=0;
 cin>>n>>m>>mini>>maxi;
 vector<int>v(m+1);
 for(int i=0;i<m;i++){
  cin>>v[i];
  if(v[i]==mini)
    pmini=1;
  else if(v[i]==maxi)
    pmaxi=1;
 }
for(int i=0;i<m;i++){
  if(v[i]<mini){
    cout<<"Incorrect"<<endl;
    return;
  }
  if(v[i]>maxi){
    cout<<"Incorrect"<<endl;
    return;
  }
}
int need=n-m;
if(need==0){
   if(pmini && pmaxi)
    cout<<"Correct"<<endl;
  else
    cout<<"Incorrect"<<endl;
}
else if(need==1){
   if(pmini || pmaxi)
    cout<<"Correct"<<endl;
  else
    cout<<"Incorrect"<<endl;
}
else if(need>=2){
    cout<<"Correct"<<endl;
 
}
 
}
 
int main()
{ 
  //int t;
  //cin>>t;
  //while(t--){
    solve();
  //}
  return 0;
}
 