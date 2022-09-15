#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
     int n,sum=0,odd=0,even=0;
     cin>>n;
          int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
          odd+=(arr[i]%2);
     }
     even=n-odd;
     if(odd%2) cout<<"YES"<<'\n';
     
     else{
         if(odd>=1 && even>=1) 
     cout<<"YES"<<'\n';
     else
     cout<<"NO"<<'\n';
     } 
 }
 
 return 0;
}