#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
cin>>t;
while(t--){
    cin>>n;
int res=0;
for (long long int pw=1;pw<=n;pw=pw*10+1){
    for(int d=1;d<=9;d++){
        if(pw*d<=n){
            res++;
        }
    }
}
cout<<res<<endl;
}
    return 0;
}