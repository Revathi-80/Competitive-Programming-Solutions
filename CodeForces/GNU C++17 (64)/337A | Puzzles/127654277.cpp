#include <bits/stdc++.h>
using namespace std;
 
int main(){
int best=INT_MAX;
   int n,m,maxi=0,mini=INT_MAX;
   cin>>n>>m;
  int arr[m];
  for(int i=0;i<m;i++) cin>>arr[i];
  sort(arr,arr+m);
  if(m==n){
      for(int i=0;i<m;i++){
          maxi=max(maxi,arr[i]);
          mini=min(mini,arr[i]);
      }
      best=maxi-mini;
  }
  for(int i=0;i<=m-n;i++){
      int diff= arr[i+n-1] -arr[i];
      best=min(best,diff);
  }
   cout<<best<<endl;
   
 return 0;
}