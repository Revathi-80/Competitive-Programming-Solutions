#include <bits/stdc++.h>
using namespace std;
 
int main() {
int a,b,c;
cin>>a>>b>>c;
//a=x*y b=y*z c=z*x  a=c*b/z*z  z=rt(cb/a) b=ac/xx x=rt(ac/b)
int x,y,z;
x=sqrt((a*c)/b);
y=sqrt((a*b)/c);
z=sqrt((c*b)/a);
int ans=4*x+4*y+4*z;
cout<<ans<<endl;
 return 0;
}