#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
      
       for(int i=1;i<=n;i++){
            int len=2*n;
           for(int j=1;j<=i;j++){
           cout<<"(";
           }
           for(int j=1;j<=i;j++){
               cout<<")";
           }
           len-=2*i;
           for(int j=1;j<=len/2;j++){
               cout<<"()";
           }
          cout<<endl; 
       }
   }
    return 0;
}