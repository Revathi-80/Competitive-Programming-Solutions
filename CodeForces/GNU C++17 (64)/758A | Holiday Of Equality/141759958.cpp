 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) ((int)(x).size())
const long long  mod = 1000000007;
 
 
int main(){
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++) {
      int x;
      cin>>x;
      v.push_back(x);
 }
  sort(v.begin(),v.end());
 int ans=v[n-1];
 int sum=0;
 for(int i=0;i<n;i++){
     sum+=(ans-v[i]);
 }
 cout<<sum<<endl;
 
return 0;
}