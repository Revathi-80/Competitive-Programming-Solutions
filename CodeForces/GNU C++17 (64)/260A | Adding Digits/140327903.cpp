 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
long long int a,b,n;
cin>>a>>b>>n;
if(a%b==0){
 cout<<a;
 for(int i=0;i<n;i++){
  cout<<"0";
 }
}
else if(((a*10)+1)%b==0){
     cout<<(a*10)+1;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+2)%b==0){
     cout<<(a*10)+2;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+3)%b==0){
     cout<<(a*10)+3;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+4)%b==0){
     cout<<(a*10)+4;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+5)%b==0){
     cout<<(a*10)+5;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+6)%b==0){
     cout<<(a*10)+6;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+7)%b==0){
     cout<<(a*10)+7;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+8)%b==0){
     cout<<(a*10)+8;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10)+9)%b==0){
     cout<<(a*10)+9;
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else if(((a*10))%b==0){
     cout<<(a*10);
 for(int i=0;i<n-1;i++){
  cout<<"0";
 }
 
}
else
cout<<"-1";
 
return 0;
}