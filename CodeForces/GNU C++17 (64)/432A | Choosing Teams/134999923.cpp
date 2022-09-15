#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n,k,cnt=0;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)
  cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n;i++){
 if(arr[i]+k<=5)
  cnt++;
}
cout<<cnt/3;
return 0;
}