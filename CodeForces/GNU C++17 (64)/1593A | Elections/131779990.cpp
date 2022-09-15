#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
 long long int test,a,b,c;
 cin>>test;
 while(test--){
     cin>>a>>b>>c;
     cout<<max(0LL,1+max(b,c)-a)<<" "<<max(0LL,1+max(a,c)-b)<<" "<<max(0LL,1+max(b,a)-c)<<endl;
 }
 return 0;
}