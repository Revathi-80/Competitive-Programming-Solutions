#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
  ll n,sum=0;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int  x;
    cin>>x;
    v.push_back(x);
  }
  for(int i=0;i<n-1;i++){
    sum+=(v[i+1]-v[i]-1);
  }
  if(sum<=2)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
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
 