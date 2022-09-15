 
#include<bits/stdc++.h>
using namespace std;
void solve(){
int n,sum=0;
 cin>>n;
 int a[n];
 for (int i = 0; i <n; i++)
 {
  cin>>a[i];
  sum+=a[i];
 }
 if(sum%n==0)
  cout<<"0"<<endl;
 else
  cout<<"1"<<endl;
 
}
int main(){
int t;
cin>>t;
while(t){
 solve();
 t--;
}
return 0;
}