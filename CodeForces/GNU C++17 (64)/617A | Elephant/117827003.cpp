#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x,steps=0,steps5=0,steps4=0,steps3=0,steps2=0,steps1=0;
    cin>>x;
    while(x!=0){
        if(x>=5){
        steps5=x/5;
            x=x%5;
        }
        else if(x>=4){
            steps4=x/4;
            x=x%4;
        }
       else if(x>=3){
            steps3=x/3;
            x=x%3;
        }
    else if(x>=2){
            steps2=x/2;
            x=x%2;
        }
        else if(x>=1){
            steps1=x/1;
            x=x%1;
        }
    }
   steps=steps1+steps2+steps3+steps4+steps5; 
    cout<<steps<<endl;
  
 return 0;
}