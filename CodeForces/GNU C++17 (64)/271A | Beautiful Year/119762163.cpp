#include <bits/stdc++.h>
using namespace std;
int countDistinct(int n){
    int arr[10]={0};
    int count=0;
    while(n){
        int r=n%10;
        arr[r]=1;
        n/=10;
    }
    for(int i=0;i<10;i++){
        if(arr[i]) count++;
    }
    return count;
}
int countDigit(int n){
    int c=0;
    while(n){
        int r=n%10;
        c++;
        n/=10;
    }return c;
}
int nextNumberDistinct(int n){
    while(n<INT_MAX){
        int distinct=countDistinct(n+1);
        int total=countDigit(n+1);
        if(distinct==total){
            return n+1;
        }else  n++;
    }return -1;
}
int main() {
   int n;
   cin>>n;
   cout<<nextNumberDistinct(n);
      
  
 return 0;
}