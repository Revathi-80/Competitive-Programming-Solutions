#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n;
cin>>n;
int arr[n];
if(n==1){
 cout<<"1"<<endl;
 return;
}
for(int i=0;i<n;i++) cin>>arr[i];
 int cnt=1,mx=INT_MIN;
for(int i=1;i<n;i++){
 if(arr[i]>=arr[i-1]){
  cnt++;
mx=max(mx,cnt);
 }
 else{
  cnt=1;
  mx=max(mx,cnt);
 }
//cout<<mx<<" "<<cnt<<endl;
}
cout<<mx;
}
 
 
int main()
{
  // int t;
   //cin>>t;
    //while(t){
    solve();
   // t--;
   // }
    return 0;
}