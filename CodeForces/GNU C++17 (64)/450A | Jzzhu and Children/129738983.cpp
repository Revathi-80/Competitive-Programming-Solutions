#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,maxi=1;
cin>>n>>m;
int arr[n];
queue<int>q;
for(int i=1;i<=n;i++){
    cin>>arr[i];
    q.push(i);
} 
while(!q.empty()){
    int cur=q.front();
    q.pop();
    maxi=cur;
    arr[cur]-=m;
    if(arr[cur]>0)
    q.push(cur);
}
cout<<maxi;
 return 0;   
}