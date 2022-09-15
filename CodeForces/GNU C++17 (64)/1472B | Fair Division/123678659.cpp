#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
    int n,cn1=0,cn2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==1) cn1++;
          else cn2++;
    }int sum=(cn1+2*cn2);
    if(sum%2!=0) cout<<"NO"<<endl;
    else{
        int ans=sum/2;
    if( ans%2==0 ||(ans%2==1 && cn1!=0) ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
 return 0;
}