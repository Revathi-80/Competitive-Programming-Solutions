#include<bits/stdc++.h>
using namespace std;
#define int long long
void findTime(int K)
{
   string T="21:00";
    // convert the given time in minutes
    int minutes = ((T[0] - '0')
                       * 10
                   + T[1] - '0')
                      * 60
                  + ((T[3] - '0')
                         * 10
                     + T[4] - '0');
   
    // Add K to current minutes
    minutes += K;
   
    // Obtain the new hour
    // and new minutes from minutes
    int hour = (minutes / 60) % 24;
   
    int min = minutes % 60;
   
    // Print the hour in appropriate format
    if (hour < 10) {
        cout << 0 << hour << ":";
    }
    else {
        cout << hour << ":";
    }
   
    // Print the minute in appropriate format
    if (min < 10) {
        cout << 0 << min;
    }
    else {
        cout << min;
    }
}
// void solve(){
// int n;
// cin>>n;
// if(n<60){
//   cout<<"21:"<<n<<endl;
//   return;
// }
// else {
//   int h=n/60;
//   n-=(h*60);
//   if(h+21<24){
//     cout<<h
//   }
// }
// }

signed main()
{ 
  int t;
  cin>>t;
  findTime(t);
  // while(t--){
   // solve();
  // }
  return 0;
}

