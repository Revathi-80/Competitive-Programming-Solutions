#include <bits/stdc++.h>
using namespace std;
 
int main() {
string s;
getline(cin>>ws,s);
set<char>ss;
for(int i=0;i<s.length();i++){
if(s[i]!='/0')
    ss.insert(s[i]);
}
//for(auto it:ss) cout<<it<<" ";
if(ss.size()==2) cout<<"0";
else if(ss.size()==3) cout<<"1";
else
cout<<ss.size()-4;
return 0;
}
 