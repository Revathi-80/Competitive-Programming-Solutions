#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n,maxii=0,minii=0,maxi=0,mini=0;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
  maxi=arr[0];
 for(int i=0;i<n;i++){
    if(maxi<arr[i]){
    maxi=arr[i];
    maxii=i;
    }
 }mini=arr[0];
 for(int i=0;i<n;i++){
     if(mini>=arr[i]){
         mini=arr[i];
         minii=i;
     }
     
 }
if(maxii>minii) cout<<(maxii-1)+(n-minii)-1<<endl;
else cout<<(maxii-1)+(n-minii);
 return 0;
}