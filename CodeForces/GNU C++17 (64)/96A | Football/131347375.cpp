#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt=0;
    cin>>s;
    if(s.find("0000000")!=string::npos || s.find("1111111")!=string::npos)
cout<<"YES";
else
cout<<"NO";
    return 0;
}