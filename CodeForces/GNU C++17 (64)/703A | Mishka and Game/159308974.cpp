// C++ implementation of above approach
#include <bits/stdc++.h>
 
using namespace std;
 
// Function to count the number
// of perfect squares and cubes
 
int countSC(int N)
{
 
    int res = (int)sqrt(N) + (int)cbrt(N)
 
              - (int)(sqrt(cbrt(N)));
 
 
    return res;
}
 
int main() {
 int t ,a1=0,a2=0;
 cin>>t;
 while(t--){
  int n,m;
  cin>>n>>m;
  //cout<<countSC(n)<<endl;
  if(m>n)
     a1++;
  if(n>m)
     a2++;
  }
  if(a2>a1)
    cout<<"Mishka"<<endl;
  else if (a1>a2)
     cout<<"Chris"<<endl;
   else
       cout<<"Friendship is magic!^^"<<endl;
}