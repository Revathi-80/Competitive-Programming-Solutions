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
  // if(n==1){
  //   cout<<"maomao90"<<endl;
  //   return;
  // }
  int cnt=0;
  for(int i=0;i<n;i++){
   
    cnt+=(v[i]);
  }
  //cout<<cnt<<endl;
  if((cnt-n)&1)
    cout<<"errorgorn"<<endl;
  else
    cout<<"maomao90"<<endl;
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
 