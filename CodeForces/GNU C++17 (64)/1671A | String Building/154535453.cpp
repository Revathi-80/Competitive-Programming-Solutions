#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
  string s;
  cin>>s;
  int n=s.length();
  if(s.length()==1){
    cout<<"NO"<<endl;
    return;
  }
//   bool ch=false;
//   for(int i=0;i<s.length()-2;i++){
//     if(s[i]=='a'&& s[i+1]=='b' && s[i+2]=='a')
//       ch=true;
//     if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='b')
//       ch=true;
//   }
//   if(s[n-2]=='a' && s[n-1]=='b'){
//     cout<<"NO"<<endl;
//     return;
//   }
  if(s[n-2]=='a' && s[n-1]=='b'){
    cout<<"NO"<<endl;
    return;
  }
  if(s[n-2]=='b' && s[n-1]=='a'){
    cout<<"NO"<<endl;
    return;
  }
  if(s[0]=='b' && s[1]=='a'){
    cout<<"NO"<<endl;
    return;
  }
  if(s[0]=='a' && s[1]=='b'){
    cout<<"NO"<<endl;
    return;
  }
// if(ch)
//   cout<<"NO"<<endl;
// else
// cout<<"YES"<<endl;
  string s1="aba";
  string s2="bab";
  if (s.find(s1) != std::string::npos) {
    cout << "NO" << '\n';
    return;
}
if (s.find(s2) != std::string::npos) {
    cout << "NO" << '\n';
    return;
}
cout<<"YES"<<endl;
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
 