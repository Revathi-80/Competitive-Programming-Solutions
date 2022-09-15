#include<bits/stdc++.h>
using namespace std;
void solve(){
 int n;
 cin>>n;
 if(n%7==0){
  cout<<n<<endl;
  return;
 }
 n-=n%10; // remove the last digit
 //cout<<n<<endl;
 for(int i=1;i<10;i++){
  int temp=n+i;
 // cout<<temp<<endl;
  if(temp%7==0){
   cout<<temp<<endl;
   return;
  }
 }
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