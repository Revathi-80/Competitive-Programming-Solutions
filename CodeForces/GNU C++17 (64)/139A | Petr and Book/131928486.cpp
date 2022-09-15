#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,x,cnt=0;
cin>>n;
queue<int>v;
for(int i=0;i<7;i++){
    cin>>x;
    v.push(x);
}
while(n>0){
    cnt++;
    int y=v.front();
    n=n-v.front();
     v.pop();
    v.push(y);
}
if(cnt>7 && cnt%7!=0 ) cout<<cnt%7;
else if(cnt%7==0) cout<<"7";
else cout<<cnt;
 return 0;
}