#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int t;
 cin>>t;
 cout<<"I ";
for(int i=1;i<=t;i++){
    if(i%2==0)
        cout<<"love ";
    if(i%2!=0)
    cout<<"hate ";
    if((i+1)<=t)
    cout<<"that I ";
}
cout<<"it";
return 0;
}