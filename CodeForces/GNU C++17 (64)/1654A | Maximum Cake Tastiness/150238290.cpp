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
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());
  cout<<v[0]+v[1]<<endl;
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