#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
string str;
cin>>str;
int count=0;
for(int i=0;i<t;i++){
if(str[i]==str[i+1])
count++;
}
cout<<count<<endl;
 return 0;
}