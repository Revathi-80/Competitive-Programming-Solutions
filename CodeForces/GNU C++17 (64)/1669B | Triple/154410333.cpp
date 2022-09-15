#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
  int x;
  cin>>x;
  v.push_back(x);
}
sort(v.begin(),v.end());
bool flag=false;
int maxi=0;
for(int i=0;i<n-2;i++){
  if(v[i]==v[i+1] && v[i+1]==v[i+2]){
    maxi=max(maxi,v[i]);
    flag=true;
    
  }
}
if(flag==false)
  cout<<"-1";
else
  cout<<maxi;
cout<<endl;
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
 