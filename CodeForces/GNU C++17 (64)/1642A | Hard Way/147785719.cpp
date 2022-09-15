#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int x,y,a,b,m,n,cnt=0;
cin>>x>>y>>a>>b>>m>>n;
if(y==b && n<b)
 cnt=abs(x-a);
else if(b==n && y<b)
 cnt=abs(a-m);
else if(n==y && b<n)
 cnt=abs(m-x);
cout<<cnt<<endl;
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