#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
ll n,cnt=0;
cin>>n;
map<int,int>a;
for (int i = 0; i < n; ++i)
{
 int x;
 cin>>x;
 x-=i;
 cnt+=a[x];
 a[x]++;
}
 
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