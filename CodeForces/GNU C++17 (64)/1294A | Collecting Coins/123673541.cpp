#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
     int a,b,c,n,ans;
     cin>>a>>b>>c>>n;
    if ((a+b+c+n)%3!=0) cout<<"NO"<<endl;
   else{  ans=(a+b+c+n)/3;
     if(ans<a || ans<b || ans<c) cout<<"NO"<<endl;
     else  cout<<"YES"<<endl;
 }
 }
 
 return 0;
}