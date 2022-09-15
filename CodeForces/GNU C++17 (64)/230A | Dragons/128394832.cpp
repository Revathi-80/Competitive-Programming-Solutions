#include<bits/stdc++.h>
using namespace std;
int main(){
   int s,n;
   cin>>s>>n;
   vector<pair<int,int>>v;
   int x,y;
   for(int i=1;i<=n;i++){
       cin>>x>>y;
       v.push_back({x,y});
   }
   sort(v.begin(),v.end());
   for(auto &it:v){
       if(s>it.first){
           s+=it.second;
       }
       else {
           cout<<"NO";
           return 0;
       }
   }
   cout<<"YES";
  
   
    return 0;
}