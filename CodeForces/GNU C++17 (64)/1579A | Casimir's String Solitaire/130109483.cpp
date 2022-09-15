#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
 cin>>t;
while(t--){
    int cna=0,cnb=0,cnc=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A') cna++;
        else if(s[i]=='B') cnb++;
        else cnc++;
    }
    //cout<<cna<<" "<<cnb<<" "<<cnc<<endl;
    if((cnb-cna-cnc)==0)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
} 
return 0;
}