#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int cnt=0;
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    for(int i=0;i<n;i++){
      //  for(int j=s2.length()-1;j>=0;j--){
            if(s1[i]==s2[n-1-i]) cnt++;
      //  }
    }
    if(cnt==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}