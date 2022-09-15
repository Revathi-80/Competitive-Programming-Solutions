//
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 string str;
cin>>str;
int l=str.length();
int count1=0,count2=0;
for(int i=0;i<l;i++){
    if(str[i]>='a' && str[i]<='z'){
    count1++;
    }else
    count2++;
}
//cout<<count1<<count2<<'\n';
if(count1>=count2){
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<'\n';
}
else{
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<'\n';
}
 return 0;
}