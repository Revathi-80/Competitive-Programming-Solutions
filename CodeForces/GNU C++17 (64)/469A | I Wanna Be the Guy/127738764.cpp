#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
set<int>st;
for(int i=1;i<=2;i++){
    int k;
    cin>>k;
    for(int j=1;j<=k;j++){
        int x;
        cin>>x;
        st.insert(x);
    }
}
 
if(st.size()==n ) cout<<"I become the guy."<<endl;
else cout<<"Oh, my keyboard!"<<endl;
 return 0;
}