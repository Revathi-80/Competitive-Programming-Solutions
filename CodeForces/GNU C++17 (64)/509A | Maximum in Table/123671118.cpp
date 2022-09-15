#include <bits/stdc++.h>
using namespace std;
int ans(int r,int c){
    if(r==1 || c==1) return 1;
    return ans(r-1,c)+ans(r,c-1);
}
int main() {
 int n;
 cin>>n;
 cout<<ans(n,n);
 return 0;
}