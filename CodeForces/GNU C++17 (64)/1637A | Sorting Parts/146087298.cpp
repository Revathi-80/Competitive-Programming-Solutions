#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) {
 cin>>a[i];
}
 
if(is_sorted(a,a+n)) cout<<"NO"<<endl;
else
 cout<<"YES"<<endl;
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