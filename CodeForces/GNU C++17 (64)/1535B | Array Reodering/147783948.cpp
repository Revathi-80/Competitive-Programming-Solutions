#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
int n,cnt=0;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++) {
 int x;
 cin>>x;
 arr.push_back(x);
}
sort(arr.begin(),arr.end(),[](int x,int y){
 return x%2<y%2;
});
//for(int i=0;i<n;i++) cout<<arr[i];
for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++)
  cnt+= __gcd(arr[i],2*arr[j]) > 1 ; 
 
}
cout<<cnt<<endl;
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