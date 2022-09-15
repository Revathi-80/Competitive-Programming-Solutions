#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n,k;
cin>>n>>k;
ll odd=(n+1)/2;
if(k<=odd){
    cout<<2*k -1;
}else {
    k-=odd;
cout<<2*k;
}
 return 0;
}