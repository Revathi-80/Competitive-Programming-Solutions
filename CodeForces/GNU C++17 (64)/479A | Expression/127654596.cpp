#include <bits/stdc++.h>
using namespace std;
 
int main(){
int a,b,c;
cin>>a>>b>>c;
set<int>st;
int d=a+b*c;
st.insert(d);
int e=a*(b+c);
st.insert(e);
int f=a*b*c;
st.insert(f);
int g=(a+b)*c;
st.insert(g);
int h=a+b+c;
st.insert(h);
auto it=st.end();
it--;
cout<<*it<<endl;
 return 0;
}