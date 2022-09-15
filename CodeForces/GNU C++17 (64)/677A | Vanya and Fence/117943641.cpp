#include <iostream>
using namespace std;
 
int main() {
int n,h,w=0;
cin>>n>>h;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>h) w=w+2;
    else w=w+1;
}cout<<w<<endl;
 
 return 0;
}