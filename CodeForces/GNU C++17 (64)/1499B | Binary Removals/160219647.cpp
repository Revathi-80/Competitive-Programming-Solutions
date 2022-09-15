#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN= (int)1e5;
 
void solve(){
string s;
    cin >> s;
    int i = s.find("11");
    int j = s.rfind("00");
    cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
 
}
 
int main()
{ 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
 