#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int n,sum=0,sum2=0,x,m;
 cin>>n;
 int arr[n];
 for(int i=1;i<=n;i++){
     cin>>x;
     arr[x]=i;
 }
 cin>>m;
while(m--){
    cin>>x;
     sum+=arr[x];
         sum2+=(n-arr[x]+1);
 }
 cout<<sum<<" "<<sum2;
 return 0;   
}