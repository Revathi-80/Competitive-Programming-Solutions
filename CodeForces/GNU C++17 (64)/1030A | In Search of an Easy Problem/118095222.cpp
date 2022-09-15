#include <iostream>
using namespace std;
 
int main() {
int t;
cin>>t;
int a[t];
bool tes=false;
for(int i=0;i<t;i++){
    cin>>a[i];
    if(a[i]==1) tes=true; 
}
if(tes==true)
    cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
 
 return 0;
}