#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
     int res=0;
      for(int i=0;i<n;i++){
          if(s1[i]=='1' && s2[i]=='1'){
              res=1;
              break;
          }
      }
      if(res==0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
return 0;
}