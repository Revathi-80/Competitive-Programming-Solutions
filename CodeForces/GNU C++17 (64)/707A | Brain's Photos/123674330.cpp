#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n,m,cn=0;
 cin>>n>>m;
 char s[n][m];
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         cin>>s[i][j];
         if(s[i][j]=='W' || s[i][j]=='G' || s[i][j]=='B') {
         cn++;
    //         cout<<cn<<" " << s[i][j]<<'\n';
         }
     }
 }//cout<<cn;
if(cn==n*m) cout<<"#Black&White"<<endl;
else cout<<"#Color"<<endl;
 return 0;
}