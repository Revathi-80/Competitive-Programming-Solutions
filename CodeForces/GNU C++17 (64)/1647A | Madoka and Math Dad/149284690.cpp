#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
 int n;
  cin>>n;
  if(n%3==1){
    int flag=1;
    while(n){
       if(flag){
        cout<<"1";
        flag=0;
        n-=1;
       }
       else{
        cout<<"2";
        flag=1;
        n-=2;
       }
    }
  }
  else{
    int flag=1;
    while(n){
       if(flag){
        cout<<"2";
        flag=0;
        n-=2;
       }
       else{
        cout<<"1";
        flag=1;
        n-=1;
       }
    }
  }
  cout<<endl;
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