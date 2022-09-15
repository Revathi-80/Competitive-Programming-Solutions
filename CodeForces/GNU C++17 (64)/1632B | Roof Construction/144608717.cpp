#include<bits/stdc++.h>
using namespace std;
void solve(){
 int n;
 cin>>n;
 int p=pow(2,(int)(log2(n-1)));
 //cout<<p<<endl;
 for(int i=1;i<p;i++){
  cout<<i<<" ";
 }
 cout<<"0"<<" ";
 for(int i=p;i<n;i++){
  cout<<i<<" ";
 }
 cout<<endl;
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