#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long a,b;
  cin>>a>>b;
  int x=min(a,b);
  cout<<x<<" ";
  int y=max(a,b);
  cout<<(y-x)/2;
  
return 0;
}
 