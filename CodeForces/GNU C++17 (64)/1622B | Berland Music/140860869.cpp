 
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
 int n;
 cin>>n;
 int p[n],q[n];
 vector<int>zero;
 vector<int>one;
 map<int,int>map;
 for(int i=0;i<n;i++){
  cin>>p[i];
  q[i]=p[i];
        map[p[i]]=i;
 }
 string s;
 cin>>s;
 for(int i=0;i<n;i++){
  if(s[i]=='0')
   zero.push_back(p[i]);
  else
   one.push_back(p[i]);
 }
 sort(zero.begin(),zero.end());
 sort(one.begin(),one.end());
 sort(p,p+n);
 reverse(zero.begin(),zero.end());
 reverse(one.begin(),one.end());
 reverse(p,p+n);
 int i;
 for( i=0;i<one.size();i++){
  q[map[one[i]]]=p[i];
 }
    for(int j=0;j<zero.size();j++){
     q[map[zero[j]]]=p[i];
     i++;
    }
    for(int i=0;i<n;i++)
     cout<<q[i]<<" ";
    cout<<endl;
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