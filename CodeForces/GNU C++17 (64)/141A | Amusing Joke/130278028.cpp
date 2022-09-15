#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int c[26],d[26];
int main() {
  char x[100],y[100],z[100];
  cin>>x>>y>>z;
  for(int i=0;i<strlen(x);i++){
      c[x[i]-'A']++;
  }
   for(int i=0;i<strlen(y);i++){
      c[y[i]-'A']++;
  }
   for(int i=0;i<strlen(z);i++){
      d[z[i]-'A']++;
  }
  for(int i=0;i<26;i++){
      if(c[i]!=d[i]){
      cout<<"NO"<<endl;
      return 0;
      }
  }
  cout<<"YES";
 
}