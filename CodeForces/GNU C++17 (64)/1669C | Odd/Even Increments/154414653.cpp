#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  bool flag=true;
  for(int i=0;i<n-2;i++){
    if(abs(v[i+2]-v[i])%2!=0)
      flag=false;
  }
  if(flag)
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
 