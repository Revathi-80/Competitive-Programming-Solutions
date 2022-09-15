#include <bits/stdc++.h>
using namespace std;
int n,h,sum;
int main() {
cin>>n;
while(sum<=n){
    h++;
    sum+=(h*(h+1))/2;
    }
    cout<<h-1<<endl;
 return 0;
}