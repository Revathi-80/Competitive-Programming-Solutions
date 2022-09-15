#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
 
 int a,b;
  cin>>a>>b;
  int s=a*1+b*2;
  if(a==0){
    cout<<1<<endl;
    return;
  }
  cout<<s+1<<endl;
 
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