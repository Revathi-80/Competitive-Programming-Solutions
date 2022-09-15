 
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,t;
 cin>>t;
 while(t--){
  cin>>n;
  int cnt=0;
  if(n%2==0){
   cout<<"0"<<endl;
   continue;
  }
  else{
   string s= to_string(n);
   if(s[0]%2==0){
     cout<<"1"<<endl;
     continue;
    }
      else{  
       for(int i=1;i<s.length();i++){
    
                   if(s[i]%2!=0)
                      cnt++;
                      
       }
      if(cnt!=s.length()-1){
         cout<<"2"<<endl;
       }
       else
        cout<<"-1"<<endl;
      }
  }
 
 }
return 0;
}