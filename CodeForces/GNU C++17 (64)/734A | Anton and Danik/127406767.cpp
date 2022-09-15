#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,cn1=0,cn2=0;
    string s;
    cin>>n;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='A') cn1++;
        else cn2++;
    }
    if(cn1==cn2) cout<<"Friendship"<<endl;
    else if(cn1>cn2) cout<<"Anton"<<endl;
    else 
    cout<<"Danik"<<endl;
    return 0;
}