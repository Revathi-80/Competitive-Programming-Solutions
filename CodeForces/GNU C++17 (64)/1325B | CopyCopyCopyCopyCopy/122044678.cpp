#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
cin>>t;
 while(t--){
     int n,x;
     cin>>n;
     set<int>myset;
     for(int i=0;i<n;i++) {
         cin>>x;
         myset.insert(x);
     }
     cout<<myset.size()<<endl;
 }
 return 0;
}