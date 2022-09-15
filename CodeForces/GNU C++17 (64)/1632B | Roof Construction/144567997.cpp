#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;
 cin>>n;
 if(n==2){
  cout<<1<<" "<<0<<endl;
  continue;
 }
 int x=2,i=1;
 while(x<=n){
  x*=2;
  i++;
 }
 if((n&n-1)==0) x/=2;
 x/=2;
 for(int i=n-1;i>=x;i--){
      cout<<i<<" ";
 }
 cout<<0<<" ";
 for(int i=x-1;i>=1;i--){
  cout<<i<<" ";
 }
 cout<<endl;
 
    }
    return 0;
}