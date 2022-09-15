#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n,sum=0,target=0,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i]; sum+=arr[i];
}
sort(arr,arr+n);
for(int i=n-1;i>-1;i--){
    if(sum>=target){
        count++;
        target+=arr[i];
        sum-=arr[i];
    }
}
cout<<count;
 return 0;
}