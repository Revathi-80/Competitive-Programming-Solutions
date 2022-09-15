#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int j=4;
string s="hello",str;
cin>>str;
for(int i=str.size()-1;i>=0;i--){
    if(str[i]==s[j]){
        s.pop_back();
        j--;
        if(j==-1) break;
    }
}
if(s.size()>0) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
 return 0;
}