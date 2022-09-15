#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
if(n==1 && arr[0]==1){
  cout<<"YES"<<endl;
  return;
}
if(n==1 && arr[0]>1){
  cout<<"NO"<<endl;
  return;
}
sort(arr,arr+n);
if(abs(arr[n-1]-arr[n-2])>1){
  cout<<"NO"<<endl;
  return;
}
cout<<"YES"<<endl;
}
int main()
{
   int t;
   cin>>t;
  
    while(t){
   solve();
   t--;
    }
    return 0;
}