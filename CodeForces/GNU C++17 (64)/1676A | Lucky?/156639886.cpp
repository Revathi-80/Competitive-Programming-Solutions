#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
string s;
cin>>s;
int sum=0,sum1=0;
for(int i=0;i<3;i++){
 sum+=int(s[i]);
}
for(int i=3;i<6;i++){
 sum1+=int(s[i]);
}
if(sum==sum1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
int main()
{
   int t;
   cin>>t;
  
    while(t){
   solve();
   t--;
    }
    return 0;
}
 