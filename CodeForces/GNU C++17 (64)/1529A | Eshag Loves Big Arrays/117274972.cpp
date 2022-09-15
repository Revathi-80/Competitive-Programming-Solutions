#include<bits/stdc++.h>
using namespace std;
int main(){
      int t,n;
      cin>>t;
      while(t--){
            cin>>n;
            vector<int>arr(n);
            for(int i=0;i<n;i++) cin>>arr[i];
            sort(arr.begin(),arr.end());
            int ans=n;
            for(int j=0;j<n;++j) if(arr[j]==arr[0]) ans--;
            cout<<ans<<endl;
      }
      return 0;
}