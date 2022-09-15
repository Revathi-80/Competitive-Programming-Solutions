#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int x=max(a,max(b,c)+1);
    cout<<x-a<<" ";
    int y=max(b,max(a,c)+1);
    cout<<y-b<<" ";
    int z=max(c,max(a,b)+1);
    cout<<z-c<<" ";
    cout<<endl;
}
 return 0;
}