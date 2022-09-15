#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n,ans=0;
cin>>n;
unordered_map<int,int>mp;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
 mp[arr[i]]++;
}
for(int i=4;i>=1;i--){
 if(i==4){
  ans+=mp[i];
 }
 if(i==3){
  ans+=mp[i];
  mp[1]-=mp[i];
 }
 if(i==2){
  if(mp[i]==1)
           ans+=1;
        else
         ans+=ceil((mp[i]*2)/4.0);
 }
 if(i==1){
  mp[i]-=((mp[2]*2)%4); 
  if(mp[i]>0)
   ans+= ceil(mp[i]/4.0);
 }
 
}
cout<<ans<<endl;
}
 
 
int main()
{
  // int t;
   //cin>>t;
    //while(t){
    solve();
   // t--;
   // }
    return 0;
}