#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k=0;
cin>>n;
int x[n],y[n];
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
}
for(int i=0;i<n;i++){
    int a=0,b=0,c=0,d=0;
    for(int j=0;j<n;j++){
        if(x[i]==x[j] && y[i]>y[j])
        a=1;
        if(x[i]==x[j] && y[i]<y[j])
        b=1;
        if(y[i]==y[j] && x[i]<x[j])
        c=1;
        if(y[i]==y[j] && x[i]>x[j])
        d=1;
    }
    if(a&b&c&d) k++;
}
cout<<k;
 return 0;   
}