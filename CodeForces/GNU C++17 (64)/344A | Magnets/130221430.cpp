#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
 cin>>t;
 int arr[t];
 for(int i=0;i<t;i++) cin>>arr[i];
 int cnt=1;
 for(int i=1;i<t;i++){
     
     if(arr[i]!=arr[i-1])
     cnt++;
 }
 cout<<cnt;
 
return 0;
}