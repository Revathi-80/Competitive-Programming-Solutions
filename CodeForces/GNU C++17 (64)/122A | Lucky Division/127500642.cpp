#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n;
 cin>>n;
 int res=0;
string str;
str=to_string(n);
for(int i=0;i<str.size();i++){
    if(str[i]=='4' || str[i]=='7')
    res=1;
    else {
        res=0;
        break;
    }
}
 
if(res==1) cout<<"YES";
else {
    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0)
    cout<<"YES";
    else 
    cout<<"NO";
}
 return 0;
}