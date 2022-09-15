 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int t;
 cin>>t;
 while(t--){
int n;
cin>>n;
string str;
cin>>str;
if(is_sorted(str.begin(),str.end())){
 cout<<"0"<<endl;
continue;
}
string temp=str;
sort(temp.begin(),temp.end());
cout<<"1"<<endl;
vector<int>ans;
for(int i=0;i<n;i++){
 if(str[i]!=temp[i])
  ans.push_back(i+1);
}
cout<<ans.size()<<" ";
for(int i=0;i<ans.size();i++)
 cout<<ans[i]<<" \n"[i+1==ans.size()];
}
return 0;
}