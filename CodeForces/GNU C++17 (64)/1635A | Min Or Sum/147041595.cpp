#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n,sum=0;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
 /* code */
 cin>>arr[i];
 sum|=arr[i];
}
cout<<sum<<endl;
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