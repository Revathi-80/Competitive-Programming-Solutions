#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
char arr[8][8];
for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
    cin>>arr[i][j];
    //cout<<arr[i][j];
  }
  //cout<<endl;
}
int flag=0;
for( int i=1;i<7;i++){
  for( int j=1;j<7;j++){
  //  cout<<arr[i][j];
    if(arr[i][j]=='#' && arr[i][j]==arr[i-1][j+1] && arr[i][j]==arr[i+1][j+1] && arr[i][j]==arr[i-1][j-1] && arr[i][j]==arr[i+1][j-1]){
      cout<<i+1<<" "<<j+1<<endl;
      flag=1;
        break;
  }
}
if(flag)
break;
}
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
 