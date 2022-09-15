#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n,mini=INT_MAX,index;
 cin>>n;
 vector<int>v;
 for (int i = 0; i < n; ++i)
 {
  int x;
  cin >> x;
  v.push_back(x);
 }
 sort(v.begin(),v.end());
 for(int i = 0;i < n-1; i++){
  if(abs(v[i]-v[i+1])<mini){
   mini=abs(v[i]-v[i+1]);
   index=i;
  }
 }
 vector<int>big,small;
 for (int i = 0; i < n; ++i)
 {
  if(i==index || i==index+1) continue;
  if(v[i]>v[index])
   big.push_back(v[i]);
  else
   small.push_back(v[i]);
 }
 cout<<v[index]<<" ";
 for (int j = 0; j < big.size(); j++)
 {
  cout<<big[j]<<" ";
 }
 for (int i = 0; i < small.size(); ++i)
 {
  cout<<small[i]<<" ";
 }
 cout<<v[index+1]<<" ";
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