#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n,k,cn=0,sum=0;
 cin>>n>>k;
 int rem=240-k;
 for(int i=1;i<=n;i++){
      sum+=(5*i);
     if(sum<=rem){
         cn++;
     }
 }
 cout<<cn;
 return 0;
}