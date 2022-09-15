#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n,even=0,odd=0,leve,lodd;
 cin>>n;
 int a[n];
for(int i=0;i<n;i++) 
 cin>>a[i];
for(int i=0;i<n;i++){
 if(a[i]%2==0){
 even++;
 leve=i;
 }
 else{
  odd++;
  lodd=i;
 }
}
if(even==1) cout<<leve+1;
else cout<<lodd+1;
return 0;
}