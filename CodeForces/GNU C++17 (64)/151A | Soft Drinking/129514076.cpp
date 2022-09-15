#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int totalDrink=(k*l)/nl;
  int lime=(c*d);
  int salt=p/np;
  int ans= min(totalDrink,lime);
  int ans1=min(ans,salt)/n;
  cout<<ans1<<endl;
    return 0;
}