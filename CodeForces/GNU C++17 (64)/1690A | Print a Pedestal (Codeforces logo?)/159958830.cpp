#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
 
void solve(){
int n; cin>>n;
int mid=n/3;
if(n%3==0)
cout<<mid<<" "<<mid+1<<" "<<mid-1<<endl;
// else if(n%2==0)
// cout<<n-2*mid<<" "<<mid+2<<" "<<mid-2<<endl;
else if(n%3==1 && n%2==0)
  cout<<mid+1<<" "<<mid+2<<" "<<mid-2<<endl;
else
  cout<<n-2*mid-1<<" "<<mid+2<<" "<<mid-1<<endl;
}
 
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 