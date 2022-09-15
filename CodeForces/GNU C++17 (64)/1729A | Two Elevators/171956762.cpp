#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int first=a, second=abs(b-c)+c;
   
    if(first>second)
        cout<<2<<endl;
    else if(first==second)
        cout<<3<<endl;
    else
        cout<<1<<endl;
}
 
int main() {
  int t;
  cin>>t;
  while(t--){
      solve();
  }
  return 0;
}