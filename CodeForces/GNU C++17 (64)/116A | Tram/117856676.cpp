#include <bits/stdc++.h>
//#include<algorithm>
using namespace std;
 
int main() {
    int x,a,b,sum=0,max1=0;
    cin>>x;
    for(int i=0;i<x;i++){
      cin>>a>>b;
      sum=sum-a+b;
      if(sum>max1) max1=sum;
    }
    
    cout<<max1<<endl;
  
 return 0;
}