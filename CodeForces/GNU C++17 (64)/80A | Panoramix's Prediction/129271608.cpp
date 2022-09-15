#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
 int n,m;
 cin>>n>>m;
 for(int i=0;i<15;i++){
     if(arr[i]==n&&arr[i+1]==m) {
         cout<<"YES";
       return 0;
     }
   // break; 
 }
 cout<<"NO";
//return 0;
}
 