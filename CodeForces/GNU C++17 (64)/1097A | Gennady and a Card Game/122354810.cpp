#include <bits/stdc++.h>
using namespace std;
 
int main() {
set<char>s;
for(int i=1;i<=2;i++){
    char ch;
    cin>>ch;
    s.insert(ch);
}
for(int i=1;i<=10;i++){
    char ch;
    cin>>ch;
    if(s.find(ch)!=s.end()) {
        cout<<"YES"<<endl;
    return 0;    
    }
}cout<<"NO"<<endl;
 
 return 0;
}