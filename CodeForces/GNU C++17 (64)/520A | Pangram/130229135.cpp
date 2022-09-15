#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    int n;
    cin>>n;
 string s;
 cin>>s;
set<char>ss;
for(int i=0;i<s.length();i++){
    if(isupper(s[i])){
        s[i]=tolower(s[i]);
    }
    ss.insert(s[i]);
}//cout<<ss.size();
if(ss.size()==26)
cout<<"YES";
else
cout<<"NO";
return 0;
}