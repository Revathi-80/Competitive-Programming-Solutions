#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vector<int>v;
 vector<int>v1;
 if(n%4==0){
cout<<"YES"<<endl;
for(int i=1;i<=n/2;i++){
 v.push_back(2*i);
 v1.push_back(2*i -1);
}
for(auto it : v1){
 v.push_back(it);
}
v[n-1]=v[n-1]+n/2;
for(auto it : v){
 cout<<it<<" ";
}
cout<<endl;
 }
 else
  cout<<"NO"<<endl;
}
return 0;
}