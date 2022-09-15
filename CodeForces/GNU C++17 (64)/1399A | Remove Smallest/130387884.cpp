#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t,n,x;
 cin>>t;
 while(t--){
     cin>>n;
      vector<int>arr(n);
     for(auto &it: arr){
         cin>>it;
         
     }
     sort(arr.begin(),arr.end());
     bool res=true;
     for(int i=1;i<n;++i){
         res&=(arr[i]-arr[i-1] <=1);
            
         
         
     }
     if(res ) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
return 0;
}
 