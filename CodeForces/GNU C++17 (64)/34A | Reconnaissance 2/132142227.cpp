#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
 int n,mini=INT_MAX,res,i1,i2;
 cin>>n;
 int a[n];
 for(int i=1;i<=n;i++) cin>>a[i];
 for(int i=2;i<=n;i++){
          res=abs(a[i]-a[i-1]);
         if(res<mini){
             mini=res;
             i1=i-1;
             i2=i;
     }
 }
 res=abs(a[1]-a[n]);
 if(res<mini){
     i1=1;
     i2=n;
     mini=res;
 }
 cout<<i1<<" "<<i2;
 return 0;
}