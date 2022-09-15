#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int  a,sum=0;
   cin>>a;
   int s[a];
  for(int i=0;i<a;i++){
      cin>>s[i];
      sum +=s[i];
  }
 
 // cout<<sum<<endl;
  double ans=double(sum)/a;
  cout<<fixed<<setprecision(12)<<ans;
  
 return 0;
}