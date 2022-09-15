#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
int n,cnt=0,cnt0=0;
cin>>n;
int arr[n];
// set<int>s;
for(int i=0;i<n;i++){
  cin>>arr[i];
  if(arr[i]==0)
    cnt0++;
}
// if(s.size()==1 && n!=1){
//   for(auto x:s)
//     if(x==0)
//   cout<<0<<endl;
//   return;
// }
 
for(int i=0;i<n-1;i++){
  if(arr[i]==0  && arr[i+1]!=0)
    cnt++;
}
if(arr[0]!=0) cnt++;
// cout<<cnt+1<<endl;
// if(cnt0==n){
//   cout<<0<<endl;
//   return;
// }
// // if(cnt0==0){
//   cout<<1<<endl;
//   return ;
// }
// if(cnt0==1 && (arr[0]==0 || arr[n-1]==0)){
//   cout<<1<<endl;
//   return ;
// }
//cout<<"cnt "<<cnt<<endl;
if(cnt>=3){
  cnt=2;
}
cout<<cnt<<endl;
}
 
signed main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 