#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n,cnt=0;
cin>>n;
string s;
for(int i=0;i<n;i++){
cin>>s;
if(s=="++X" || s=="X++")
cnt++;
else
cnt--;
}
cout<<cnt<<endl;
}
 
int main()
{
   //int t;
   // cin>>t;
   // while(t){
      solve();
     //  t--;
 
    //}
    return 0;
}