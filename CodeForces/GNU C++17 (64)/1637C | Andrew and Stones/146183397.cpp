#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
ll n,sum=0,cnt=0;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++){
 cin>>arr[i];
}
for(ll i=1;i<n-1;i++){
  cnt+=arr[i];
    if(arr[i]%2==0)
  sum+=arr[i]/2;
else
  sum+=(arr[i]+1)/2;
}
if((n==3 && arr[1]%2!=0)|| cnt==n-2){
  cout<<"-1"<<endl;
}
else
cout<<sum<<endl;
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