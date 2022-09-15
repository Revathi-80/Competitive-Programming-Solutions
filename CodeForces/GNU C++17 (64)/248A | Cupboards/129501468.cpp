#include<bits/stdc++.h>
using namespace std;
int main(){
   int r,l,n,l0=0,l1=0,r1=0,r0=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>l>>r;
       if(l==0) l0++;
       else if(l==1) l1++;
       if(r==0) r0++;
       else if(r==1) r1++;
   }
   int maxi=min(l1,l0);
   int maxir=min(r0,r1);
   cout<<(maxi+maxir)<<endl;
    return 0;
}