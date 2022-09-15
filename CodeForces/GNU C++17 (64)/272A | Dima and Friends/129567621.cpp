#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,sum=0,ans=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
for(int i=1;i<=5;i++){
if((sum+i)%(n+1)!=1)
    ans++;
}
cout<<ans;
 return 0;   
}