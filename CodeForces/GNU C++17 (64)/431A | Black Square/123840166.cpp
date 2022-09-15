#include <bits/stdc++.h>
using namespace std;
 
int main() {
int a[5];
for(int i=1;i<=4;i++){
    cin>>a[i];
}string str;
cin>>str;
int sum=0;
for(int i=0;i<str.size();i++){
    sum +=a[str[i]-'0'];
}cout<<sum<<endl;
 return 0;
}