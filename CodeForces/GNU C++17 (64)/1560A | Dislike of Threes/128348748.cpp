#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int>v;
    while(t--){
      int k;
      cin>>k;
      v.push_back(1);
      for(int i=1;i<=1666 ;i++){
          int last=i%10;
          if(i%3==0 || last==3){
              continue;
          }
          else 
          v.emplace_back(i);
          
      }
     // for(auto it:v) {
       //   cout<<it<<" ";} cout<<endl;
     cout<<v[k]<<endl;
    }
    return 0;
}