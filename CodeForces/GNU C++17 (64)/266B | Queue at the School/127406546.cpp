#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
    for(int i=0;i<n;i++){
        if(s[i]=='G' && s[i-1]=='B'){
            s[i-1]='G';
            s[i]='B';
            i++;
        }
    }
        
    }
    cout<<s<<endl;
    return 0;
}