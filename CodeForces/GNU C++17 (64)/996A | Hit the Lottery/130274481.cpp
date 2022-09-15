#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
   ll n,cur=0;
   cin>>n;
   vector<int>vec={1,5,10,20,100};
   int k=4;
   while(n>0){
   if(n>=vec[k]){
      // cur+=n/vec[k];
       n-=vec[k];
       cur++;
   }else
   k--;
       
   }
   cout<<cur;
return 0;
}