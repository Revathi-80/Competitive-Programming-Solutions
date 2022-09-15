#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,yr=0;
    cin>>a>>b;
    while(b>=a){
        yr++;
        a=3*a;
        b=2*b;
    }
cout<<yr;
 return 0;
}