#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n;
 cin>>n;
 set<int>s;
 for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
 }
 int m=s.size();
 for(int i=0;i<m;i++){
  cout<<m<<" ";
 }
 int c=m;
 for(int i=m;i<n;i++){
  c=c+1;
  cout<<c<<" ";
 }
 cout<<endl;
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