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
int n,k;
string s;
cin>>n>>k;
cin>>s;
//if(k==0) {cout<<"1"<<endl;
//return ;
//}
 
if(!palindrome(s) || k==0)
  cout<<"1"<<endl;
else
cout<<"2"<<endl;
 
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