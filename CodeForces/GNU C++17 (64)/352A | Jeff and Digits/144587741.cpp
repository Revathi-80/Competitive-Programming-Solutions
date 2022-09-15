#include<bits/stdc++.h>
using namespace std;
void solve(){
 int n,cnt5=0,cnt0=0;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]==5)
   cnt5++;
  if(a[i]==0)
   cnt0++;
 } 
 if(cnt0==0){ cout<<"-1";
 return;}
 if(cnt5<9){
  cout<<"0";
 return;}
 while(cnt5%9!=0){
  cnt5--;
 }
 for(int i=0;i<cnt5;i++)
  cout<<"5";
 for(int j=0;j<cnt0;j++)
  cout<<"0";
}
 
int main()
{
    //int t;
   // cin>>t;
   // while(t){
      solve();
     //  t--;
 
    //}
    return 0;
}