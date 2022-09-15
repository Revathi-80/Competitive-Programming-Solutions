#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,cnt=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   int maxi=arr[0],mini=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>maxi){
           maxi=arr[i];
           cnt++;
       }
        if(arr[i]<mini){
           mini=arr[i];
           cnt++;
       }
       
   }
   cout<<cnt;
    return 0;
}