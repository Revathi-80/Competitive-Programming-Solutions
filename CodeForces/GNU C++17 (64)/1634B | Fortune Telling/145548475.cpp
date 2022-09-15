#include<bits/stdc++.h>
using namespace std;
#define ll long long
string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
return str;
}
bool palindrome(string s){
 bool flag=false;
 int n=s.length();
 for(int i=0;i<n;i++)
  if(s[i]!=s[n-i-1])
   flag=true;
  return flag;
}
void solve(){
ll n,x,y,xorsum=0;
cin>>n>>x>>y;
ll arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
xorsum^=arr[i];
}
//0th bit 
// 0^ai -> 0 if ai is even and 1 if ai is oddd
// 1^ai ->0 if ai is odd and 1 if ai is even
// so the parity is changing 
// the 0th bit is inverted in both add and xor operation
// odd+odd->even even+even->even odd+even->odd
//x->even x+3->odd || x->odd x+3->even
if((x^xorsum)%2==y%2)
 cout<<"Alice"<<endl;
else
 cout<<"Bob"<<endl;
 
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