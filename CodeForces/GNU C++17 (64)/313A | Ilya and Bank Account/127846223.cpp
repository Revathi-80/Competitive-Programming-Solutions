#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int n;
cin>>n;
if(n<0){
    n=-n;
    n=10*(n/100)+min(n%10,(n/10)%10);
    n=-n;
}
cout<<n;
 return 0;
}