#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int a,b,c,x,y,sum=0;
bool flag=false;
cin>>a>>b>>c>>x>>y;
if(a+c>=x && b+c>=y && a+b+c>=x+y)
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
 