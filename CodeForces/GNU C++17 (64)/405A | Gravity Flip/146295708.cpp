#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
 cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
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