#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
 ll t,a,b;
 cin>>t;
while(t--){
    cin>>a>>b;
    if(a%b==0) {
        cout<<"0"<<endl;
 
    }
   
    if(a%b!=0) cout<<b-(a%b)<<endl;
}
return 0;
}