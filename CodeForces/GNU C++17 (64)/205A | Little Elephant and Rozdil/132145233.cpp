#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
 int n,x;
 cin>>n;
 vector<pair<int,int>>a;
 for(int i=1;i<=n;i++){
     cin>>x;
     a.push_back({x,i});
 }
 sort(a.begin(),a.end());
 if(n==1)
 cout<<1;
else{
if(a[0].first==a[1].first) cout<<"Still Rozdil";
 else cout<<a[0].second;
}
 return 0;
}