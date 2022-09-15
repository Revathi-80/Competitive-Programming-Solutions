#include<bits/stdc++.h>
using namespace std;
int main(){
       int t,ans=0;
       cin>>t;
       while(t--){
              int arr[3];
              for(int i=0;i<3;i++){
                     cin>>arr[i];
              }int count=0;
              for(int i=0;i<3;i++){
                     if(arr[i]==1)
                     count++;
              }
              if(count>=2){
              ans++;
              }
              
              
       }cout<<ans<<endl;
}