#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
 
void solve(){
 vector<int>e(3);
 vector<int>l(3);
 for(int i=0;i<3;i++){
  cin>>e[i];
 }
for(int i=0;i<3;i++){
  cin>>l[i];
 }
 int ex=0,lac=0;
for(int i=0;i<3;i++){
  int cur=e[i],next=l[i];
  if(cur>=next)
    ex+=(cur-next)/2;
  else
    lac+=(l[i]-e[i]);
 }
 
if(ex>=lac)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
 
int main()
{ 
  // int t;
  // cin>>t;
  // while(t--){
    solve();
  // }
  
  return 0;
}
 