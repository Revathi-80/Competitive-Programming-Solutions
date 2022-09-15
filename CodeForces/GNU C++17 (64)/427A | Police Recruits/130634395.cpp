#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,cnt=0,m=0;
cin>>n;
while(n--){
    int x;
    cin>>x;
    if(x==-1){
        if(m>0) m--;
        else cnt++;
    }
    else 
    m+=x;
}
cout<<cnt;
return 0;
}
 