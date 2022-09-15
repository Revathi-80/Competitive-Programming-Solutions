#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n,cnt=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
 if(arr[i]<0)
  cnt++;
}
  bool check=true;
  // cout<<cnt<<endl;
for(int i=0;i<cnt-1;i++){
    if(abs(arr[i])<abs(arr[i+1]) ){
     check=false;
    }
    // cout<<check<<" ";
}
// cout<<endl;
for(int i=cnt;i<n-1;i++){
  if(abs(arr[i])>abs(arr[i+1]))
    check=false;
  // cout<<check<<" ";
}
// cout<<endl;
if(check)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
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
 