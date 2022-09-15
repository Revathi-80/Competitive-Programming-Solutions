#include<bits/stdc++.h>
using namespace std;
void solve(){
 string str;
 cin>>str;
 int n=stoi(str);
 if(stoi(str)%7==0)
  cout<<str<<endl;
 else{
  for(int i=n-n%10;i<=n+10-(n%10);i++){
   if(i%7==0 && i%10!=0){
    cout<<i<<endl;
    return;
   }
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