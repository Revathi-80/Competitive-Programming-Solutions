

#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{  
  
  int n,maxi=0;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  vector<int>left(n+2,0);

  left[0]=0;
  for(int i=1;i<n;i++){
   // cout<<left[i-1]<<" "<<v[i]<<endl;
    left[i]=__gcd(left[i-1],v[i-1]);
    
  }

  vector<int>right(n+2,0);
  right[n+1]=0;

  for(int i=n-1;i>=0;i--){
  //  cout<<right[i+1]<<" "<<v[i]<<" "<<__gcd(right[i+1],v[i])<<endl;
    right[i]=__gcd(right[i+1],v[i]);
  }

  //   for (int i = 0; i < n+1; ++i)
  // {
  //   cout<<right[i]<<" ";
  // }
  // cout<<endl;

  for (int i = 0; i < n; ++i)
  {
    int temp;
   // if(i-1!=0 && i+1 !=n-1)
     temp=__gcd(left[i],right[i+1]);
    maxi=max(maxi,temp);
  }
  cout<<maxi<<endl;
  return 0;
}

