#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[5][5]={0};
    for(int ii=1;ii<=3;ii++){
        for(int jj=1;jj<=3;jj++){
            cin>>arr[ii][jj];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<((arr[i][j]+arr[i][j+1]+arr[i][j-1]+arr[i+1][j]+arr[i-1][j]+1)%2);
        }cout<<'\n';
    }
 return 0;
}
 