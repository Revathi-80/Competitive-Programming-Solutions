#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int n,t;
   cin>>n;
   int ar[n],b[n];
   for(int i=0;i<n;i++){
       cin>>t;
       b[t-1]=i+1;
   }
   for(int i=0;i<n;i++){
       cout<<b[i]<<" ";
   }
    return 0;
}