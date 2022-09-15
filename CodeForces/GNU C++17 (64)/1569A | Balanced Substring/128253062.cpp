#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
       int cnta=0,cntb=0,r1,r2;
 
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
                    if(s[i]=='a') cnta++;
                    else cntb++;
                    }
           for(int i=0;i<n;i++){
               if(i<n-1){
                   if(((s[i]=='a')&&(s[i+1]=='b'))||((s[i]=='b')&&(s[i+1]=='a'))){
                       r1=i+1;
                       r2=i+2;
                       break;
                   }
               }
           }     
        if(cnta==0 || cntb==0)
        cout<<"-1"<<" "<<"-1"<<endl;
        else{
            cout<<r1<<" "<<r2<<endl;
        }
        
       
    }
    return 0;
}